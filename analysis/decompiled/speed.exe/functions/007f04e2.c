/* speed.exe 007f04e2 FUN_007f04e2; analysis pseudocode, not buildable source.
 * calls 007edc56 FUN_007edc56
 * calls 007edca5 FUN_007edca5
 */

uint FUN_007f04e2(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((int)param_1 < 1) {
    return param_1 & 0xffffff00;
  }
  local_8 = 1;
  local_14 = param_3;
  local_1c = param_1;
  local_10 = param_4;
  local_18 = param_2;
  local_c = param_5;
  uVar1 = FUN_007edca5(*param_2,100,&local_1c);
  iVar2 = FUN_007edc56(FUN_007f0484,uVar1);
  return (uint)(iVar2 == 1);
}

