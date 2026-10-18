/* speed.exe 0045d8f0 FUN_0045d8f0; analysis pseudocode, not buildable source.
 */

void FUN_0045d8f0(undefined2 *param_1)

{
  *(char *)((int)param_1 + 1) = (char)*param_1;
  *(char *)param_1 = (char)((ushort)*param_1 >> 8);
  return;
}

