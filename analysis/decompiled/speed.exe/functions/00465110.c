/* speed.exe 00465110 FUN_00465110; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004b IsBadReadPtr
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_00465110(int param_1,char param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  FUN_007ec1bd();
  for (puVar4 = *(undefined4 **)(param_1 + 4); puVar4 != (undefined4 *)(param_1 + 4);
      puVar4 = (undefined4 *)*puVar4) {
    BVar2 = IsBadReadPtr(puVar4,1);
    if ((((BVar2 != 0) || (BVar2 = IsBadReadPtr((void *)*puVar4,1), BVar2 != 0)) ||
        (BVar2 = IsBadReadPtr((void *)puVar4[1],1), BVar2 != 0)) || (puVar4[3] != 0x44443333)) {
LAB_00465208:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_00911008 != '\0') break;
    if (((param_2 != '\0') && (*(char *)(param_1 + 0x40) != '\0')) && (DAT_0090e670 == 0)) {
      for (piVar3 = puVar4 + 4; piVar3 != (int *)(puVar4[2] + (int)puVar4); piVar3 = piVar3 + 1) {
        if (*piVar3 != -0x11111112) {
          DAT_00911008 = '\x01';
          goto LAB_00465208;
        }
      }
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0xc);
  if (puVar4 == (undefined4 *)(param_1 + 0xc)) {
    FUN_007ec1c8();
    return;
  }
  while (((BVar2 = IsBadReadPtr(puVar4,1), BVar2 == 0 &&
          (BVar2 = IsBadReadPtr((void *)*puVar4,1), BVar2 == 0)) &&
         ((BVar2 = IsBadReadPtr((void *)puVar4[1],1), BVar2 == 0 &&
          (*(char *)((int)puVar4 + 9) == '\"'))))) {
    puVar4 = (undefined4 *)*puVar4;
    if (puVar4 == (undefined4 *)(param_1 + 0xc)) {
      FUN_007ec1c8();
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

