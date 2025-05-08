# 🔍 Binary Search Notes

## 💡 Concept Overview:
Binary Search is a **divide and conquer algorithm** used on sorted arrays or monotonic functions.
It works by repeatedly dividing the search space in half.

---

## ⏱️ Time and Space Complexity:
| Scenario | Time Complexity | Space Complexity |
|----------|------------------|------------------|
| Best     | O(1)             | O(1)             |
| Average  | O(log n)         | O(1)             |
| Worst    | O(log n)         | O(1)             |

---

## ✅ Binary Search Conditions:
- Input must be **sorted**
- Works best for **searching problems** or **first/last occurrence**
- Can be applied to **rotated arrays**, **monotonic functions**, and **custom conditions**

---

## 🔁 Binary Search Template:

```cpp
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}



📘 Problem-Solving Strategy:


Check if the input is sorted or can be transformed.

Decide the search space (low, high)

Apply binary search logic.

Modify condition depending on problem (e.g., move left/right for first/last)

🛠️ STL Functions (C++):
cpp
Copy
Edit
#include <algorithm>
auto lb = lower_bound(arr.begin(), arr.end(), target); // First position >= target
auto ub = upper_bound(arr.begin(), arr.end(), target); // First position > target
🚀 Pro Tips:
Always handle edge cases: low = mid + 1 vs high = mid - 1

Use low + (high - low) / 2 to prevent overflow

For rotated arrays: compare arr[mid] with arr[high] or arr[low]



---

```cpp

int binarySearch(vector<int>& arr, int target) {
    cout << "Starting binary search..." << endl;
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << "Current search space: [" << low << ", " << high << "]" << endl;
        cout << "Checking mid index: " << mid << endl;

        if (arr[mid] == target) {
            cout << "Target found at index: " << mid << endl;
            return mid;
        } else if (arr[mid] < target) {
            cout << "Target is greater, moving to right half..." << endl;
            low = mid + 1;
        } else {
            cout << "Target is smaller, moving to left half..." << endl;
            high = mid - 1;
        }
    }
    cout << "Target not found..." << endl;
    return -1;
}
```






