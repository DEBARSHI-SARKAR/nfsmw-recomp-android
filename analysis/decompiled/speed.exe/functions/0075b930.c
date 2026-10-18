/* speed.exe 0075b930 FUN_0075b930; analysis pseudocode, not buildable source.
 * calls 0073a650 FUN_0073a650
 * calls 00759f00 FUN_00759f00
 * calls 005087a0 FUN_005087a0
 * calls 00508b10 FUN_00508b10
 */

undefined4 __thiscall FUN_0075b930(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_15c [348];
  
  if (param_3 == 0) {
    iVar1 = FUN_0073a650(local_15c,0x57,param_2 + 0x184,*(undefined4 *)(param_2 + 0x180));
    *(char *)(param_2 + 0xd) = (iVar1 == 0) + '\x01';
  }
  else {
    iVar1 = FUN_0073a650(local_15c,0x57,param_2 + 0x24,*(undefined4 *)(param_2 + 0x20));
    *(char *)(param_2 + 0xc) = (iVar1 == 0) + '\x01';
  }
  uVar3 = DAT_00904a00;
  if (0 < iVar1) {
    if ((param_3 == 0) && (*(int *)(param_1 + 8) != 2)) {
      uVar3 = 0;
      if (*(int *)(param_1 + 8) == 1) {
        uVar3 = 7;
      }
    }
    else {
      iVar2 = FUN_005087a0(local_15c,iVar1,DAT_00904a00,1);
      while ((iVar2 != 0 && (iVar2 = FUN_00759f00(1), iVar2 != 0))) {
        iVar2 = FUN_005087a0(local_15c,iVar1,DAT_00904a00,1);
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_00508b10(local_15c,iVar1,&LAB_0075c7d0,param_2,uVar3);
    return 1;
  }
  return 0;
}

