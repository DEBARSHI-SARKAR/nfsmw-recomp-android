/* speed.exe 005e9f70 FUN_005e9f70; analysis pseudocode, not buildable source.
 * calls 0072ca00 FUN_0072ca00
 * calls 007236e0 FUN_007236e0
 * calls 005e5a00 FUN_005e5a00
 */

void __thiscall FUN_005e9f70(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x2c4) + uVar5 * 4);
      if ((*(short *)(iVar2 + 4) < 0) && (DAT_009a3ba4 != 0)) {
        local_8 = *(undefined4 *)(iVar2 + 0x10);
        local_4 = *(undefined4 *)(iVar2 + 0x14);
        iVar4 = FUN_0072ca00(&local_8);
        if (iVar4 != 0) {
          sVar1 = *(short *)(iVar4 + 0xc);
          *(short *)(iVar2 + 4) = sVar1;
          uVar3 = FUN_007236e0((int)sVar1);
          *(undefined2 *)(iVar2 + 6) = uVar3;
        }
      }
      if ((*(short *)(iVar2 + 4) == param_2) || (*(short *)(iVar2 + 6) == param_2)) {
        FUN_005e5a00();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 700));
  }
  return;
}

