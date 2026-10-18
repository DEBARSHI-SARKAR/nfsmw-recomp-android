/* speed.exe 0084af40 FUN_0084af40; analysis pseudocode, not buildable source.
 * calls 0084a9a0 FUN_0084a9a0
 * calls 00862164 Ordinal_22
 * calls 0086215e Ordinal_3
 */

undefined4 FUN_0084af40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = FUN_0084a9a0();
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  Ordinal_22(uVar1,2);
  Ordinal_3(uVar1);
  return 0;
}

