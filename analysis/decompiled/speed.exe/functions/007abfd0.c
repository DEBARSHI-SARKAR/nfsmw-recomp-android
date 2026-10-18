/* speed.exe 007abfd0 FUN_007abfd0; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 0056dbe0 FUN_0056dbe0
 */

void __thiscall FUN_007abfd0(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *DAT_0091cf90;
  iVar2 = FUN_0056dbe0(0xb);
  uVar3 = (uint)*(byte *)(iVar2 + 7);
  if (param_3 == -0x6edfbf62) {
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      uVar3 = 4 - bVar1;
    }
  }
  else if ((param_3 == -0x4a68e40f) && (uVar3 = uVar3 + 1, (int)(4 - (uint)bVar1) < (int)uVar3)) {
    uVar3 = 1;
  }
  iVar2 = FUN_0056dbe0(0xb);
  *(char *)(iVar2 + 7) = (char)uVar3;
  if (*(int *)(DAT_0091cf90 + 0x18) == 3) {
    iVar2 = FUN_0056dbe0(0xb);
    *(char *)(iVar2 + 4) = (char)uVar3;
    FUN_00516c50(0x92b703b5,param_2,0xff);
  }
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

