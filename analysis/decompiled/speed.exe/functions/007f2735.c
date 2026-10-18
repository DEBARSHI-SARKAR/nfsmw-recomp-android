/* speed.exe 007f2735 FUN_007f2735; analysis pseudocode, not buildable source.
 * calls 007f3292 FUN_007f3292
 * calls 007f3367 FUN_007f3367
 * calls 007f326c FUN_007f326c
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f1daa FUN_007f1daa
 */

undefined4 * __thiscall FUN_007f2735(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_007f326c(3,param_2);
  *param_1 = &PTR_FUN_008c22c0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    param_1[0x127] = 1;
  }
  FUN_007f3292(param_3,&DAT_008c152c);
  param_1[0x11b] = 0x2c;
  iVar1 = (**(code **)(*(int *)param_1[0x11a] + 0xc))((int *)param_1[0x11a],param_1 + 0x11b);
  if (-1 < iVar1) {
    param_1[0x87] = param_1[0x11e];
    param_1[0x88] = param_1[0x120];
    param_1[0x89] = param_1[0x11f];
    param_1[0x8a] = (uint)param_1[0x11c] >> 7 & 2 | param_1[0x8a] & 0xfffffffc | param_1[0x11c] & 1;
  }
  local_18 = 0x14;
  local_14 = 0x10;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*(int *)param_1[0x11a] + 0x18))((int *)param_1[0x11a],9,&local_18);
  FUN_007f3367();
  FUN_007f0fe0(param_1 + 0x8d,0,0x230);
  param_1[0x126] = 0;
  param_1[0x8b] = 0;
  if ((*(byte *)(param_1 + 0x8a) & 2) != 0) {
    DAT_009bb41c = 0;
    (**(code **)(*(int *)param_1[0x11a] + 0x4c))((int *)param_1[0x11a],FUN_007f2615,0,0);
    param_1[0x8b] = DAT_009bb41c;
  }
  FUN_007f1daa(param_1);
  return param_1;
}

