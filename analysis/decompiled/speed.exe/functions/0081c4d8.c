/* speed.exe 0081c4d8 FUN_0081c4d8; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081c131 FUN_0081c131
 * calls 0081eae9 FUN_0081eae9
 * calls 00821ba4 FUN_00821ba4
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 00862b80 FUN_00862b80
 * calls 00821bed FUN_00821bed
 * calls 0081e274 FUN_0081e274
 */

undefined4 FUN_0081c4d8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (DAT_009c2188 != '\0') {
    FUN_0081bccb();
    puVar1 = (undefined4 *)FUN_0081c131(param_1);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff8;
    }
    else {
      if (-1 < (int)puVar1[1]) {
        FUN_0081e274(puVar1[2]);
      }
      puVar1[1] = 0xffffffff;
      if (*(char *)((int)puVar1 + 0x11) == '\0') {
        FUN_00862b80(*puVar1);
      }
      piVar4 = puVar1 + 0x27;
      if ((*piVar4 != 0) && (iVar2 = 0, *(char *)((int)puVar1 + 0x1a) != '\0')) {
        do {
          FUN_0081eae9(*piVar4);
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 < (int)(uint)*(byte *)((int)puVar1 + 0x1a));
      }
      while (iVar2 = FUN_00821bed(puVar1 + 0x48), iVar2 != 0) {
        FUN_00821ba4(puVar1 + 0x4b,iVar2);
      }
      puVar1[0x4e] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      FUN_00822050(puVar1 + 5,4);
      FUN_00822050(puVar1 + 6,4);
      FUN_00822050(puVar1 + 7,0x68);
      FUN_00822050(puVar1 + 0x21,0x68);
      uVar3 = 0;
    }
    FUN_0081bcd9();
    return uVar3;
  }
  return 0xfffffff6;
}

