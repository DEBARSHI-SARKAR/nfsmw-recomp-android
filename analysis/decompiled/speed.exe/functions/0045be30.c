/* speed.exe 0045be30 FUN_0045be30; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 */

undefined4 * __thiscall FUN_0045be30(undefined4 *param_1,undefined4 *param_2)

{
  FUN_0045a760(param_2[1]);
  *param_1 = *param_2;
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}

