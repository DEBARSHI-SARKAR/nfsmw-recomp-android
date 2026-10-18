/* speed.exe 00598c90 FUN_00598c90; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 005983c0 FUN_005983c0
 * calls 0056c5e0 FUN_0056c5e0
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_00598c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined1 local_440 [512];
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_204;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_0056c5e0();
  FUN_00460ca0(local_440,local_200,0x200);
  local_23c = param_3;
  local_230 = param_6;
  local_238 = param_5;
  local_234 = param_4;
  local_21c = param_1;
  local_224 = param_7;
  local_220 = param_8;
  local_240 = 5;
  local_214 = 2;
  local_218 = param_2;
  local_210 = 1;
  local_204 = param_9;
  FUN_005983c0(local_440);
  return;
}

