/* speed.exe 006e56e0 FUN_006e56e0; analysis pseudocode, not buildable source.
 * calls 006cc850 FUN_006cc850
 * calls 006cc9d0 FUN_006cc9d0
 * calls 006cc790 FUN_006cc790
 * calls 006cc830 FUN_006cc830
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5789) */
/* WARNING: Removing unreachable block (ram,0x006e5775) */
/* WARNING: Removing unreachable block (ram,0x006e577b) */
/* WARNING: Removing unreachable block (ram,0x006e5794) */

undefined4 FUN_006e56e0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 local_18;
  
  uVar2 = FUN_006cc790();
  uVar3 = FUN_006cc9d0(uVar2,param_1);
  uVar4 = FUN_006cc9d0(uVar2,param_2);
  local_18 = (undefined2)uVar4;
  sVar1 = FUN_006cc830(uVar3 & 0xffff,CONCAT22(extraout_var,local_18));
  uVar4 = FUN_005ac310(3,0x12,uVar3,uVar4,(int)sVar1);
  uVar2 = FUN_006cc850(uVar2,uVar4);
  return uVar2;
}

