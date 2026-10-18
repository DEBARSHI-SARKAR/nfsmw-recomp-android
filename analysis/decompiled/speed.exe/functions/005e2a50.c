/* speed.exe 005e2a50 FUN_005e2a50; analysis pseudocode, not buildable source.
 * calls 006bddf0 FUN_006bddf0
 * calls 004519d0 FUN_004519d0
 * calls 00503bc0 FUN_00503bc0
 * calls 004ff160 FUN_004ff160
 * calls 00503c80 FUN_00503c80
 * calls 0050cbe0 FUN_0050cbe0
 * calls 00503c50 FUN_00503c50
 * calls 004522f0 FUN_004522f0
 */

int __thiscall FUN_005e2a50(undefined4 param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  local_70 = FUN_004522f0(param_2);
  local_68 = FUN_004519d0(param_2);
  local_64 = param_2;
  iVar1 = FUN_0050cbe0(&local_70,0x8040000);
  if (iVar1 != 0) {
    local_60 = param_3[2];
    local_58 = param_3[1];
    local_5c = -*param_3;
    FUN_006bddf0(local_50,&local_60);
    FUN_00503bc0(local_50);
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    FUN_004ff160(param_1,&LAB_005db5b0);
    FUN_00503c50();
    FUN_00503c80(iVar1);
  }
  return iVar1;
}

