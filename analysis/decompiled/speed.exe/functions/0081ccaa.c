/* speed.exe 0081ccaa FUN_0081ccaa; analysis pseudocode, not buildable source.
 * calls 0081e022 FUN_0081e022
 * calls 0081c131 FUN_0081c131
 * calls 00821c48 FUN_00821c48
 * calls 00862b9b FUN_00862b9b
 */

undefined4 FUN_0081ccaa(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  if (DAT_009c2188 == '\0') {
    uVar4 = 0xfffffff6;
  }
  else {
    puVar1 = (undefined4 *)FUN_0081c131(param_1);
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = 0xfffffff8;
    }
    else {
      iVar2 = puVar1[0x4a];
      *param_2 = iVar2;
      if ((iVar2 != 0) && (param_2[1] = *(int *)(puVar1[0x48] + 0xc), *(short *)(puVar1 + 5) != 0))
      {
        iVar2 = FUN_0081e022(puVar1[2]);
        uVar3 = (uint)(iVar2 * 1000) / (uint)*(ushort *)(puVar1 + 5);
        param_2[2] = uVar3;
        if ((uVar3 == 0) && (iVar2 = FUN_00821c48(param_2[1]), *(int *)(iVar2 + 0x10) != 0)) {
          uVar3 = FUN_00862b9b(*puVar1);
          if (4000000 < uVar3) {
            uVar3 = 4000000;
          }
          param_2[2] = (uVar3 * 1000) / *(uint *)(iVar2 + 0x10);
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

