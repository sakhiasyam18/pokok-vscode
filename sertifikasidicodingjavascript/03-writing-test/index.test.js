import { test } from 'node:test';
import assert from 'node:assert';
import { sum } from './index.js';

test('Testing sum function', (t) => {
  // Uji dengan angka positif
  assert.strictEqual(sum(2, 3), 5, 'Sum of 2 and 3 should be 5');
  
  // Uji dengan angka negatif
  assert.strictEqual(sum(-2, -3), -5, 'Sum of -2 and -3 should be -5');

  // Uji dengan campuran positif dan negatif
  assert.strictEqual(sum(-2, 3), 1, 'Sum of -2 and 3 should be 1');

  // Uji dengan angka nol
  assert.strictEqual(sum(0, 0), 0, 'Sum of 0 and 0 should be 0');
});
