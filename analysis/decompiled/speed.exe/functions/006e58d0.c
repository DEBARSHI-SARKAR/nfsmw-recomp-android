/* speed.exe 006e58d0 FUN_006e58d0; analysis pseudocode, not buildable source.
 * calls 006cd060 FUN_006cd060
 * calls 006cc790 FUN_006cc790
 * calls 006cced0 FUN_006cced0
 * calls 005ac310 FUN_005ac310
 * calls 006ccee0 FUN_006ccee0
 */

/* WARNING: Removing unreachable block (ram,0x006e5965) */
/* WARNING: Removing unreachable block (ram,0x006e596b) */
/* WARNING: Removing unreachable block (ram,0x006e5989) */

undefined4 FUN_006e58d0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 local_18;
  
  uVar2 = FUN_006cc790();
  uVar3 = FUN_006cd060(uVar2,param_1);
  uVar4 = FUN_006cd060(uVar2,param_2);
  local_18 = (undefined2)uVar4;
  sVar1 = FUN_006cced0(uVar3 & 0xffff,CONCAT22(extraout_var,local_18));
  FUN_005ac310(3,1,uVar3,uVar4,(int)sVar1);
  uVar2 = FUN_006ccee0(uVar2,(int)(short)param_2);
  return uVar2;
}

