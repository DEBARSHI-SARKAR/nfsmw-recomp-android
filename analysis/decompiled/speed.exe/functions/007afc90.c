/* speed.exe 007afc90 FUN_007afc90; analysis pseudocode, not buildable source.
 * calls 0056f120 FUN_0056f120
 * calls 007af330 FUN_007af330
 * calls 007aeeb0 FUN_007aeeb0
 * calls 0056f7b0 FUN_0056f7b0
 * calls 0056f7a0 FUN_0056f7a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_007afc90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_007aeeb0();
  if ((cVar1 != '\0') && (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0 || (DAT_009b9e8d != '\0')))) {
    local_20 = 0;
    local_10 = 0;
    local_1c = 0;
    local_c = 0;
    local_18 = 0;
    local_8 = 0;
    local_14 = 0;
    local_4 = 0;
    iVar2 = FUN_0056f120(*(undefined1 *)(*(int *)(param_1 + 4) + 0x11));
    if (iVar2 == 0) {
      return (float10)_DAT_00890da8;
    }
    fVar4 = (float10)FUN_0056f7b0();
    FUN_0056f7a0((float)fVar4);
    if (*(int *)(param_1 + 0x1b4) == 0) goto LAB_007afd34;
    iVar2 = *(int *)(param_1 + 0x1b4) + -4;
    while( true ) {
      if (param_1 == -0x1b4) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 0x1b0;
      }
      if (iVar2 == iVar3) break;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        FUN_007af330(*(undefined4 *)(iVar2 + 0xc),local_38);
      }
      if (*(int *)(iVar2 + 4) == 0) {
LAB_007afd34:
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
    }
    fVar4 = (float10)FUN_0056f7b0();
    return fVar4;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = FUN_0056f120(*(undefined1 *)(*(int *)(param_1 + 4) + 0x11));
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_0056f7b0();
      return fVar4;
    }
  }
  return (float10)_DAT_00890da8;
}

