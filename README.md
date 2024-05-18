# migratory_birds
Given an array of bird ids find the bird id which has been seen most.

Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

Example
arr[1,1,2,2,4]

There are two each of types 1 and 2, and one sighting of type 4. Pick the lower of the two types seen twice: type 1.

Function Description

Complete the migratoryBirds function in the editor below.

migratoryBirds has the following parameter(s):
=> int arr[n]: the types of birds sighted

Returns
=> int: the lowest type id of the most frequently sighted birds

Input Format
The first line contains an integer, n, the size of arr.
The second line describes arr as n space-separated integers, each a type number of the bird sighted.

Constraints
=> t is guaranteed that each type is 1, 2, 3, 4 or 5.
