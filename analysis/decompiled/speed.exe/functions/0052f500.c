/* speed.exe 0052f500 FUN_0052f500; analysis pseudocode, not buildable source.
 * calls 0056d540 FUN_0056d540
 * calls 00514cc0 FUN_00514cc0
 * calls 00514e20 FUN_00514e20
 * calls 00514c70 FUN_00514c70
 * calls 00515520 FUN_00515520
 * calls 00525050 FUN_00525050
 */

undefined4 * __thiscall
FUN_0052f500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  char cVar2;
  
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_0089c344;
  param_1[4] = *param_4;
  param_1[5] = param_4[1];
  param_1[8] = *param_5;
  uVar1 = param_5[1];
  param_1[10] = param_6;
  param_1[0xc] = param_7;
  param_1[9] = uVar1;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  cVar2 = FUN_0056d540(param_2);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    FUN_00514c70(param_1[3]);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    FUN_00514cc0(param_1[3]);
  }
  FUN_00515520(param_1[3],param_1 + 6,param_1 + 7);
  FUN_00525050(param_1[3],param_1[4],param_1[5]);
  FUN_00514e20(param_1[3],param_1[10]);
  return param_1;
}

