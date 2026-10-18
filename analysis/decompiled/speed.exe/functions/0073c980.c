/* speed.exe 0073c980 FUN_0073c980; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 * calls 0078b2c0 FUN_0078b2c0
 */

/* WARNING: Removing unreachable block (ram,0x0073c9d8) */

uint __fastcall FUN_0073c980(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_009b0fb9 == '\0') && (uVar1 = FUN_0078eba0(param_1), (char)uVar1 == '\0')) {
    return uVar1;
  }
  uVar1 = DAT_009b0fe4;
  iVar2 = FUN_0078b2c0();
  return (iVar2 + ((uVar1 % 0x1f7) * 1000 - DAT_009b0fc0)) / 0x7acd8;
}

