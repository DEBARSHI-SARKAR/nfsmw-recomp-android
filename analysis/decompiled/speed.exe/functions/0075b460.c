/* speed.exe 0075b460 FUN_0075b460; analysis pseudocode, not buildable source.
 * calls 00508ae0 FUN_00508ae0
 * calls 00759f00 FUN_00759f00
 * calls 005087a0 FUN_005087a0
 * calls 00752b60 FUN_00752b60
 */

undefined4 __thiscall FUN_0075b460(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c80 [3200];
  
  if (*(int *)(*(int *)(param_2 + 8) * 0xd0 + 0x94 + DAT_009b09d8) != 2) {
    uVar1 = FUN_00752b60(local_c80,800);
    iVar2 = FUN_005087a0(local_c80,uVar1,DAT_00904a00,1);
    while ((iVar2 != 0 && (iVar2 = FUN_00759f00(1), iVar2 != 0))) {
      iVar2 = FUN_005087a0(local_c80,uVar1,DAT_00904a00,1);
    }
    *(undefined4 *)(param_2 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_00508ae0(local_c80,uVar1,&LAB_0073ab20,param_2,DAT_00904a00);
    return 1;
  }
  *(undefined4 *)(param_2 + 0x18) = 2;
  return 0;
}

