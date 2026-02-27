from typing import TypeVar

T = TypeVar("T", int, float)

def insertion_sort(a: list[T], ascending: bool = True) -> None:
    for j in range(1, len(a)):
        key = a[j]
        i = j - 1
        
        # Choose which logic to use (ascending or descending)
        while i >= 0 and ((ascending and a[i] > key) or (not ascending and key > a[i])):
            a[i + 1] = a[i]
            i -= 1
            
        a[i + 1] = key

    