/* speed.exe 00540cc0 FUN_00540cc0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00513b50 FUN_00513b50
 */

void __thiscall FUN_00540cc0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0x136c) = 0;
  if (param_3 == -0x6c) {
    return;
  }
  if (param_3 == -5) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_0056bc10(0x205b2bf8);
    uVar4 = 0x34dc1bec;
    uVar3 = 0x34dc1bec;
  }
  else {
    if (param_3 != 0x72617465) {
      if (param_3 != 0) {
        FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
        return;
      }
      if (DAT_0091c368 == 0) {
        return;
      }
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_0056bc10(0xdf834843);
    uVar4 = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,uVar3,uVar4,uVar1);
  return;
}

