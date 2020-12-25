# Hii..Everyone

# Here is simple Explanation of "QuickSort"

## What is it ??

Stable Quick Sort

Quick Sort is one of the sorting technique. In which devide and concur method is used. Here one of the array element is selected called as pivot and then all elements which are lower than pivot shifted at left side and higher are shifted at right side of pivot and again call the same process for left side subarray and right side subarray until subarray does not contain single element.

## Let's do with Example

    Take Array = {54,3,6,43,43,5}

    here size = 6
    then low = 0 and high = 5

    generally pivot element is taken as last so i am also takes last as pivot
    pivot = 5

    now
    54 > 5 then move to next
    3 < 5 then swap with lowest position i.e. swap(54,3) and move to next
    array = {3,54,6,43,43,5}
    6 > 5 then move to next
    43 > 5 then move to next
    43 > 5 then move to next
    now swap 54 with 5 array = {3,5,6,43,43,56}

    and then again do the same for index 0 to 0 which is single element(no need to forward) and 2 to 5

    finally afer iterating all steps array = {3,5,6,43,43,56}

In-place sort

Into In-place sort method new extra space is used only to maintain left and right side array.
but stable is always better than in-Place sort because it does not used extra space it maintain using array index.

## Time complexity

    To both solution time complexity is same
    i.e. O(nlogn)

### Rohit pawar

### [linkedIn](https://www.linkedin.com/in/rohit-pawar-1a18481b2/)

### Thank you :smile:
