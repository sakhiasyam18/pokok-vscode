import { test } from 'node:test';
import assert from 'node:assert';
import { sum } from './index.js';

test('Testing sum function', (t) => {
  // Test case 1: Sum of two positive numbers
  assert.strictEqual(sum(2, 3), 5, 'Sum of 2 and 3 should be 5');

  // Test case 2: Sum of two negative numbers
  assert.strictEqual(sum(-2, -3), -5, 'Sum of -2 and -3 should be -5');

  // Test case 3: Sum of a positive and a negative number
  assert.strictEqual(sum(7, -2), 5, 'Sum of 7 and -2 should be 5');

  // Test case 4: Sum with zero
  assert.strictEqual(sum(0, 5), 5, 'Sum of 0 and 5 should be 5');
  assert.strictEqual(sum(0, 0), 0, 'Sum of 0 and 0 should be 0');

  // Test case 5: Sum with large numbers
  assert.strictEqual(sum(1000000, 5000000), 6000000, 'Sum of 1000000 and 5000000 should be 6000000');
});
