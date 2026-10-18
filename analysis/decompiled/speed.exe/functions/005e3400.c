/* speed.exe 005e3400 FUN_005e3400; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e3400(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(float *)(param_1 + 0x18) < _DAT_00891040) || (*(float *)(param_1 + 0x138) != _DAT_00890968)
     ) {
    if ((*(float *)(param_1 + 0x18) < _DAT_00894ed8) ||
       (*(float *)(param_1 + 0x134) != _DAT_00890968)) {
      if ((*(float *)(param_1 + 0x18) < _DAT_00891184) ||
         (*(float *)(param_1 + 0x130) != _DAT_00890968)) {
        if (*(float *)(param_1 + 0x18) < _DAT_00894b64) {
          return;
        }
        if (*(float *)(param_1 + 300) != _DAT_00890968) {
          return;
        }
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = 3;
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    *(undefined4 *)(param_1 + 300 + iVar1 * 4) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x13c + iVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
    return;
  }
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 300 + iVar1 * 4) =
       (float)((fVar2 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150)
              );
  *(undefined4 *)(param_1 + 0x13c + iVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
  return;
}

