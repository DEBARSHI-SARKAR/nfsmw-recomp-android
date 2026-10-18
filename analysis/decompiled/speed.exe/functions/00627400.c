/* speed.exe 00627400 FUN_00627400; analysis pseudocode, not buildable source.
 */

int FUN_00627400(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00920390;
  DAT_00920390 = DAT_00920390 + (param_1 + 0xfU & 0xfffffff0);
  return iVar1;
}

