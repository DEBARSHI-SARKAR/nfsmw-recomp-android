/* speed.exe 00525f70 FUN_00525f70; analysis pseudocode, not buildable source.
 * calls 006cb2a0 FUN_006cb2a0
 * calls 006caec0 FUN_006caec0
 * calls 007f7bba FUN_007f7bba
 * calls 007ec298 FUN_007ec298
 * calls 007ec59c FUN_007ec59c
 * calls 007f81df FUN_007f81df
 * calls 007f9b09 FUN_007f9b09
 * calls 007f7c16 FUN_007f7c16
 */

void __fastcall FUN_00525f70(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (DAT_0091cc80 == 0) {
    DAT_0091cc80 = 1;
    FUN_007ec59c();
    FUN_007ec298(0);
    bVar1 = false;
    cVar2 = FUN_007f81df();
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x144) == 0)) {
      bVar1 = true;
    }
    else {
      FUN_007f9b09(*(int *)(param_1 + 0x144));
      uVar3 = FUN_007f7bba(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x48));
      *(undefined4 *)(param_1 + 0x144) = uVar3;
    }
    if (*(int *)(param_1 + 0x144) == 0) {
      cVar2 = FUN_007f7c16();
      if (cVar2 != '\0') {
        FUN_006cb2a0();
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
    }
    else if (!bVar1) {
      FUN_006caec0(DAT_0091cb18,&DAT_0091cb28,*(undefined4 *)(*(int *)(param_1 + 0x144) + 4));
      DAT_0091cc80 = 0;
      return;
    }
    DAT_0091cc80 = 0;
  }
  return;
}

