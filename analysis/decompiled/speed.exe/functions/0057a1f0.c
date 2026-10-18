/* speed.exe 0057a1f0 FUN_0057a1f0; analysis pseudocode, not buildable source.
 * calls 00514e20 FUN_00514e20
 * calls 005675d0 FUN_005675d0
 * calls 0041ad00 FUN_0041ad00
 */

void FUN_0057a1f0(undefined4 param_1,short *param_2)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_2 + 8);
  local_4 = *(undefined4 *)(param_2 + 10);
  local_10 = 0x3f800000;
  local_c = 0;
  if (*param_2 != 0xf) {
    cVar1 = FUN_0041ad00();
    if ((cVar1 == '\0') && ((char)param_2[1] < '\0')) {
      param_2[1] = param_2[1] & 0xff7f;
    }
  }
  FUN_005675d0(&local_8,&local_10,param_1,*(byte *)(param_2 + 1) >> 7);
  FUN_00514e20(param_1,0);
  return;
}

