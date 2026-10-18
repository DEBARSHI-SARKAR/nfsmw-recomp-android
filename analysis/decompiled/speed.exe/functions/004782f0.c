/* speed.exe 004782f0 FUN_004782f0; analysis pseudocode, not buildable source.
 * calls 0046e410 FUN_0046e410
 * calls 0045d380 FUN_0045d380
 */

int __fastcall FUN_004782f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0046e410();
  if ((iVar1 != 0) && (iVar2 = FUN_0045d380(*(undefined4 *)(param_1 + 0x2c)), iVar2 != iVar1 + 0xc))
  {
    return iVar2;
  }
  return 0;
}

