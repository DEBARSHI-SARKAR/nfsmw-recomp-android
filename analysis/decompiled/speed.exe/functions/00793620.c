/* speed.exe 00793620 FUN_00793620; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0078b8c0 FUN_0078b8c0
 */

void FUN_00793620(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0078b8c0(param_1,param_2);
  iVar1 = *(int *)((int)((ulonglong)uVar2 >> 0x20) + 4 + ((int)uVar2 + -5) * 4);
  if (iVar1 == 0) {
    return;
  }
  FUN_0083e390(iVar1);
  return;
}

