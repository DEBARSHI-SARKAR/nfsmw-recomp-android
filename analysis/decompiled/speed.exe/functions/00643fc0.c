/* speed.exe 00643fc0 FUN_00643fc0; analysis pseudocode, not buildable source.
 * calls 00635650 FUN_00635650
 * calls 00633cd0 FUN_00633cd0
 */

undefined4 * __thiscall FUN_00643fc0(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00635650();
  puVar1 = param_1 + 4;
  iVar3 = 0x32;
  do {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0x32;
  param_1[0x9a] = 0xffffffff;
  param_1[0x9b] = 1;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined1 *)((int)param_1 + 0x281) = param_2;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  uVar2 = FUN_00633cd0();
  param_1[0x9f] = uVar2;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0x9e] = "Unnamed";
  param_1[1] = 0xffffffff;
  return param_1;
}

