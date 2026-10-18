/* speed.exe 006e5d90 FUN_006e5d90; analysis pseudocode, not buildable source.
 * calls 006cdec0 FUN_006cdec0
 * calls 006cdeb0 FUN_006cdeb0
 * calls 006ce040 FUN_006ce040
 * calls 006cc790 FUN_006cc790
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5e39) */
/* WARNING: Removing unreachable block (ram,0x006e5e25) */
/* WARNING: Removing unreachable block (ram,0x006e5e2b) */
/* WARNING: Removing unreachable block (ram,0x006e5e51) */

uint FUN_006e5d90(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 local_18;
  
  uVar2 = FUN_006cc790();
  uVar3 = FUN_006ce040(uVar2,param_1);
  uVar2 = FUN_006ce040(uVar2,param_2);
  local_18 = (undefined2)uVar2;
  sVar1 = FUN_006cdeb0(uVar3 & 0xffff,CONCAT22(extraout_var,local_18));
  FUN_005ac310(3,0xd,uVar3,uVar2,(int)sVar1);
  return uVar3;
}

