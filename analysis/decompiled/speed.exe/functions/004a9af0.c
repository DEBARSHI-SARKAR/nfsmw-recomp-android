/* speed.exe 004a9af0 FUN_004a9af0; analysis pseudocode, not buildable source.
 * calls 0049c520 FUN_0049c520
 * calls 0048ddf0 FUN_0048ddf0
 * calls 007c5e60 _printf
 * calls 004a7ca0 FUN_004a7ca0
 * calls 004a7d50 FUN_004a7d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a9af0(int param_1,int param_2)

{
  int iVar1;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x44) != param_2) {
    FUN_004a7ca0();
    FUN_004a7d50();
    FUN_0049c520();
    FUN_0048ddf0();
    *(float *)(param_1 + 0x48) = local_28;
    *(undefined4 *)(param_1 + 0x4c) = local_24;
    *(undefined4 *)(param_1 + 0x50) = local_20;
    iVar1 = DAT_00911e90;
    *(undefined4 *)(param_1 + 0x54) = local_1c;
    DAT_00911e90 = DAT_00911e90 + 1;
    *(int *)(param_1 + 0x44) = param_2;
    _printf("turn align[%d] Q: %g %g %g %g\n\n",iVar1,(double)*(float *)(param_1 + 0x48),
            (double)*(float *)(param_1 + 0x4c),(double)*(float *)(param_1 + 0x50),
            (double)*(float *)(param_1 + 0x54));
  }
  return;
}

