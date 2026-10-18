/* speed.exe 006ea490 FUN_006ea490; analysis pseudocode, not buildable source.
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00446f00 FUN_00446f00
 * calls 0047edb0 FUN_0047edb0
 * calls 0047b3f0 FUN_0047b3f0
 * calls 006bd940 FUN_006bd940
 */

undefined4 __thiscall FUN_006ea490(int param_1,float *param_2)

{
  int iVar1;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x394) != 0) {
    iVar1 = FUN_0047b3f0(*(int *)(param_1 + 0x394),*(undefined4 *)(param_1 + 0x3a4));
    if (iVar1 != 0) {
      local_f0 = 0.0;
      local_ec = 0.0;
      local_e8 = 0.0;
      local_e4 = 0;
      if (*(char *)(iVar1 + 4) == '\x01') {
        FUN_0047edb0(0,&local_f0);
      }
      else {
        if (*(char *)(iVar1 + 4) != '\x03') {
          return 0;
        }
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0;
        FUN_0047edb0(0,&local_e0);
        FUN_00446f00(local_d0,local_90,1);
        FUN_0045ecf0(local_50,local_90,local_d0);
        FUN_006bd940(&local_f0,local_50,&local_e0);
      }
      *param_2 = -local_ec;
      param_2[1] = local_e8;
      param_2[2] = local_f0;
      return 1;
    }
  }
  return 0;
}

