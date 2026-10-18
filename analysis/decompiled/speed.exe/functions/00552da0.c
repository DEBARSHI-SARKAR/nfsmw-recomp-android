/* speed.exe 00552da0 FUN_00552da0; analysis pseudocode, not buildable source.
 * calls 00530a60 FUN_00530a60
 * calls 00525050 FUN_00525050
 * calls 005158b0 FUN_005158b0
 * calls 00514cc0 FUN_00514cc0
 * calls 00515a40 FUN_00515a40
 * calls 00514c70 FUN_00514c70
 * calls 005488b0 FUN_005488b0
 * calls 00516be0 FUN_00516be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00552da0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_1 + 0x170) == '\0') {
    fVar1 = (float)DAT_00987f54 - _DAT_00894b40;
    fVar2 = (float)DAT_00987f58 - _DAT_00894b38;
    local_8 = *(float *)(param_1 + 0x144) + _DAT_00899e70;
    local_4 = *(float *)(param_1 + 0x148) + _DAT_00899e68;
    local_10 = (float)((float10)*(float *)(param_1 + 0x14c) -
                      (ABS((float10)_DAT_0089eb90) + ABS((float10)_DAT_0089eb98)));
    local_c = (float)((float10)*(float *)(param_1 + 0x150) -
                     (ABS((float10)_DAT_0089eb80) + ABS((float10)_DAT_0089eb88)));
    cVar3 = FUN_005158b0(fVar1,fVar2,&local_8,&local_10);
    if (cVar3 == '\0') {
      DAT_0091cfb9 = 0;
      FUN_00514c70(*(undefined4 *)(param_1 + 0x124));
    }
    else {
      DAT_0091cfb9 = 1;
      FUN_00514cc0(*(undefined4 *)(param_1 + 0x124));
      cVar3 = FUN_00530a60();
      if (cVar3 != '\0') {
        FUN_005488b0();
      }
      if (*(int *)(param_1 + 0x15c) == 0) {
        FUN_00525050(*(undefined4 *)(param_1 + 0x124),fVar1,fVar2);
        if (DAT_00987f70 != '\0') {
          *(undefined1 *)(param_1 + 0x173) = 1;
        }
        if (*(int *)(param_1 + 0x15c) == 0) goto LAB_00552f22;
      }
      cVar3 = FUN_00515a40(&local_8,&local_10);
      if (cVar3 != '\0') {
        FUN_00516be0(0xc407210,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      }
    }
  }
LAB_00552f22:
  if (DAT_00987f70 == '\0') {
    *(undefined1 *)(param_1 + 0x173) = 0;
  }
  return;
}

