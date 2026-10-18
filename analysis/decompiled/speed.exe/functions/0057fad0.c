/* speed.exe 0057fad0 FUN_0057fad0; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 */

int __fastcall FUN_0057fad0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  iVar1 = 8;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    FUN_00404db0(puVar2 + 4,4,0xb,&LAB_00402a50);
    FUN_00404db0(puVar2 + 0xf,4,0xb,&LAB_00402a50);
    puVar2[0x26] = 0;
    puVar2[0x27] = 0;
    puVar2 = puVar2 + 0x30;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}

