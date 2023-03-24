#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) { (void)other; }

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    (void)other;
    return *this;
}

/*
 * This functions sorts a portion of the vector using insertion sort
 * @param vector<int> &v - the vector to be sorted
 * @param int start - the starting index of the portion to be sorted
 * @param int end - the ending index of the portion to be sorted
 */
static void insertionSortVector(std::vector<int> &v, int start, int end)
{
    int i, j, key;
    for (i = start + 1; i <= end; i++)
    {
        key = v[i];
        j = i - 1;
        while (j >= start && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

/*
 * This function merges two sorted portions of a vector
 * @param vector<int> &v - the vector to be merged
 * @param int start - the starting index of the first portion
 * @param int mid - the ending index of the first portion
 * @param int end - the ending index of the second portion
 */
static void mergeVector(std::vector<int> &v, int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    std::vector<int> L(n1), R(n2);

    // Save the two portions to merge in temporary vectors
    for (i = 0; i < n1; i++)
        L[i] = v[start + i];
    for (j = 0; j < n2; j++)
        R[j] = v[mid + 1 + j];

    i = 0;
    j = 0;
    k = start;
    /* Merge the two vectors back into v
     * Check if the first element of the left vector is smaller than the first
     * element of the right vector
     * If it is, add it to the vector and increment the index of the left vector
     * If it isn't, add the first element of the right vector to the vector and
     * increment the index of the right vector
     */
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            v[k] = L[i];
            i++;
        }
        else
        {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    // Add the remaining elements of the left vector to the vector
    while (i < n1)
    {
        v[k] = L[i];
        i++;
        k++;
    }

    // Add the remaining elements of the right vector to the vector
    while (j < n2)
    {
        v[k] = R[j];
        j++;
        k++;
    }
}

/*
 * This functions implements the merge insertion sort algorithm
 * @param vector<int> &v - the vector to be sorted
 * @param int start - the starting index of the portion to be sorted
 * @param int end - the ending index of the portion to be sorted
 * @param int k - the threshold value
 */
void PmergeMe::mergeMeVector(std::vector<int> &v, int start, int end, int k)
{
    if (start < end)
    {
        // If the portion to be sorted is smaller than the threshold value, use
        // insertion sort
        // Else, split the portion in two and sort them recursively
        if (end - start + 1 <= k)
            insertionSortVector(v, start, end);
        else
        {
            int mid = start + (end - start) / 2;
            mergeMeVector(v, start, mid, k);
            mergeMeVector(v, mid + 1, end, k);
            mergeVector(v, start, mid, end);
        }
    }
}

/*
 * This functions sorts a portion of the list using insertion sort
 * @param list<int> &l - the list to be sorted
 * @param int start - the starting index of the portion to be sorted
 * @param int end - the ending index of the portion to be sorted
 */
static void insertionSortList(std::list<int> &l, int start, int end)
{
    int i, j, key;
    std::list<int>::iterator it = l.begin();
    for (i = start + 1; i <= end; i++)
    {
        key = *std::next(it, i);
        j = i - 1;
        while (j >= start && *std::next(it, j) > key)
        {
            *std::next(it, j + 1) = *std::next(it, j);
            j = j - 1;
        }
        *std::next(it, j + 1) = key;
    }
}

/*
 * This function merges two sorted portions of a list
 * @param list<int> &l - the list to be merged
 * @param int start - the starting index of the first portion
 * @param int mid - the ending index of the first portion
 * @param int end - the ending index of the second portion
 */
static void mergeList(std::list<int> &l, int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    std::list<int> L, R;
    std::list<int>::iterator it = l.begin();

    // Save the two portions to merge in temporary lists
    for (i = 0; i < n1; i++)
        L.push_back(*std::next(it, start + i));
    for (j = 0; j < n2; j++)
        R.push_back(*std::next(it, mid + 1 + j));

    i = 0;
    j = 0;
    k = start;
    /* Merge the two lists back into l
     * Check if the first element of the left list is smaller than the first
     * element of the right list
     * If it is, add it to the list and increment the index of the left list
     * If it isn't, add the first element of the right list to the list and
     * increment the index of the right list
     */
    while (i < n1 && j < n2)
    {
        if (L.front() <= R.front())
        {
            *std::next(it, k) = L.front();
            L.pop_front();
            i++;
        }
        else
        {
            *std::next(it, k) = R.front();
            R.pop_front();
            j++;
        }
        k++;
    }

    // Add the remaining elements of the left list to the list
    while (i < n1)
    {
        *std::next(it, k) = L.front();
        L.pop_front();
        i++;
        k++;
    }

    // Add the remaining elements of the right list to the list
    while (j < n2)
    {
        *std::next(it, k) = R.front();
        R.pop_front();
        j++;
        k++;
    }
}

void PmergeMe::mergeMeList(std::list<int> &l, int start, int end, int k)
{
    if (start < end)
    {
        if (end - start + 1 <= k)
            insertionSortList(l, start, end);
        else
        {
            int mid = start + (end - start) / 2;
            mergeMeList(l, start, mid, k);
            mergeMeList(l, mid + 1, end, k);
            mergeList(l, start, mid, end);
        }
    }
}
