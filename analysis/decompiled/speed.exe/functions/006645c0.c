/* speed.exe 006645c0 FUN_006645c0; analysis pseudocode, not buildable source.
 * calls 00460b80 FUN_00460b80
 * calls 00464080 FUN_00464080
 * calls 00664430 FUN_00664430
 * calls 00464050 FUN_00464050
 * calls 004655f0 FUN_004655f0
 * calls 0065f860 FUN_0065f860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006645c0(int *param_1)

{
  undefined4 uVar1;
  undefined1 local_8 [4];
  undefined **local_4;
  
  _DAT_00925890 = FUN_00464050(0);
  _DAT_00925898 = FUN_00460b80();
  _DAT_00925894 = FUN_00464080(0);
  if (DAT_009258a8 == 0) {
    uVar1 = FUN_0065f860("GLOBAL\\FE_ATTRIB.BIN",local_8,0x1040);
    DAT_009258b0 = 0;
    local_4 = &PTR_LAB_008a8998;
    DAT_009258a8 = FUN_00664430(uVar1,"frontend",&DAT_009258ac,0);
    FUN_004655f0(uVar1);
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *param_1 = (int)FUN_00664b80;
  param_1[2] = (int)"LoadingFrontEnd";
  param_1[1] = 0;
  return;
}

