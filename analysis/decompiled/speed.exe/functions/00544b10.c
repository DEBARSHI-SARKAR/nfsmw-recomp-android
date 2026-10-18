/* speed.exe 00544b10 FUN_00544b10; analysis pseudocode, not buildable source.
 * calls 00527d40 FUN_00527d40
 */

float10 __fastcall FUN_00544b10(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_00527d40();
  return (float10)uVar1 / (float10)iVar2;
}

