function twoSum(nums, target) {
    let map = new Map(); // Create a new map to store numbers and their indices
    for (let i = 0; i < nums.length; i++) { // Loop through the array
        let complement = target - nums[i]; // Calculate the complement (target - current number)
        if (map.has(complement)) { // Check if the complement exists in the map
            return [map.get(complement), i]; // If yes, return its index and current index
        }
        map.set(nums[i], i); // Otherwise, store the current number and its index in the map
    }
    return []; // If no solution found, return an empty array
}

// Example input
const nums = [6, 5, 3, 2];
const target = 11;

// Running the function
const result = twoSum(nums, target);
console.log(result);  // Output: [1, 2]
