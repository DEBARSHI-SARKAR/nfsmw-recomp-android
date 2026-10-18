/* speed.exe 008224de FUN_008224de; analysis pseudocode, not buildable source.
 * calls 0081f026 FUN_0081f026
 */

void FUN_008224de(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  *(undefined2 *)(param_2 * 0x90 + 0x6e + DAT_009c21f4) = param_3;
  FUN_0081f026(param_2,0xffffffff,0xffffffff,0,0,param_4,param_5,&local_34,&local_1c,param_7 + 0x18,
               0,*(undefined1 *)(param_7 + 7));
  return;
}

