/* speed.exe 00464a70 FUN_00464a70; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 */

undefined * __fastcall FUN_00464a70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x160);
  if (((0 < iVar2) && (iVar2 <= *(int *)(param_1 + 0x154))) &&
     (pbVar1 = (byte *)(*(int *)(param_1 + 0x15c) + -0xc + iVar2 * 0xc), pbVar1 != (byte *)0x0)) {
    FUN_004647c0(&DAT_00910f08,"line %d in %s",*(undefined2 *)(pbVar1 + 8),
                 (uint)*pbVar1 * 0x54 + 4 + param_1);
    return &DAT_00910f08;
  }
  FUN_004647c0(&DAT_00910f08,&DAT_008941f8,param_1 + 4);
  return &DAT_00910f08;
}

