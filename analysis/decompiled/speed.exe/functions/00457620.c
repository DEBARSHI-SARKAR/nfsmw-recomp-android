/* speed.exe 00457620 FUN_00457620; analysis pseudocode, not buildable source.
 * calls 00456830 FUN_00456830
 */

int __thiscall FUN_00457620(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  uVar1 = iVar2 + param_1[2] * 8;
  local_8 = param_2;
  local_4 = 0;
  uVar3 = FUN_00456830(iVar2,uVar1,&local_8,0);
  if (uVar3 < uVar1) {
    return (int)(uVar3 - iVar2) >> 3;
  }
  return -1;
}

