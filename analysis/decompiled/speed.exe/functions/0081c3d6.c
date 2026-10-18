/* speed.exe 0081c3d6 FUN_0081c3d6; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081c131 FUN_0081c131
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 00821bed FUN_00821bed
 * calls 00821bc8 FUN_00821bc8
 * calls 00862b65 FUN_00862b65
 * calls 00862b6e FUN_00862b6e
 */

undefined4 FUN_0081c3d6(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_009c2188 != '\0') {
    puVar2 = (undefined4 *)FUN_0081c131(param_1);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0xfffffff8;
    }
    else if (puVar2[0x4d] == 0) {
      uVar4 = 0xfffffff3;
    }
    else {
      if (param_5 == 0) {
        param_4 = FUN_00862b65(*puVar2,param_3,param_4,0x6c454353);
      }
      else if (param_5 == 1) {
        param_4 = FUN_00862b6e(*puVar2,param_3,0,0x6c454353);
      }
      if (param_4 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        FUN_0081bccb();
        iVar3 = FUN_00821bed(puVar2 + 0x4b);
        FUN_00822050(iVar3,0x28);
        FUN_00821bc8(puVar2 + 0x48,iVar3);
        puVar1 = puVar2 + 3;
        *(int *)(iVar3 + 8) = param_4;
        *puVar1 = *puVar1 + 0x100;
        if ((int)*puVar1 < 0) {
          *puVar1 = 0;
        }
        *(uint *)(iVar3 + 0xc) = *puVar1 | param_1;
        *(undefined4 *)(iVar3 + 0x20) = param_2;
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        FUN_0081bcd9();
      }
    }
    return uVar4;
  }
  return 0xfffffff6;
}

