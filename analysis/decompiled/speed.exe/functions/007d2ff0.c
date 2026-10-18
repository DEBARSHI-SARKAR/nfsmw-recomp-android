/* speed.exe 007d2ff0 ___updatetlocinfo_lk; analysis pseudocode, not buildable source.
 * calls 007d2e00 ___freetlocinfo
 * calls 007cd100 __getptd
 */

/* Library Function - Single Match
    ___updatetlocinfo_lk
   
   Library: Visual Studio 2003 Debug */

int ___updatetlocinfo_lk(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  piVar1 = (int *)p_Var2->_tfpecode;
  if (piVar1 != (int *)PTR_DAT_00906b3c) {
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (piVar1[0xb] != 0) {
        *(int *)piVar1[0xb] = *(int *)piVar1[0xb] + -1;
      }
      if (piVar1[0xd] != 0) {
        *(int *)piVar1[0xd] = *(int *)piVar1[0xd] + -1;
      }
      if (piVar1[0xc] != 0) {
        *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + -1;
      }
      if (piVar1[0x10] != 0) {
        *(int *)piVar1[0x10] = *(int *)piVar1[0x10] + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var2->_tfpecode = (int)PTR_DAT_00906b3c;
    *(int *)PTR_DAT_00906b3c = *(int *)PTR_DAT_00906b3c + 1;
    if (*(int *)(PTR_DAT_00906b3c + 0x2c) != 0) {
      **(int **)(PTR_DAT_00906b3c + 0x2c) = **(int **)(PTR_DAT_00906b3c + 0x2c) + 1;
    }
    if (*(int *)(PTR_DAT_00906b3c + 0x34) != 0) {
      **(int **)(PTR_DAT_00906b3c + 0x34) = **(int **)(PTR_DAT_00906b3c + 0x34) + 1;
    }
    if (*(int *)(PTR_DAT_00906b3c + 0x30) != 0) {
      **(int **)(PTR_DAT_00906b3c + 0x30) = **(int **)(PTR_DAT_00906b3c + 0x30) + 1;
    }
    if (*(int *)(PTR_DAT_00906b3c + 0x40) != 0) {
      **(int **)(PTR_DAT_00906b3c + 0x40) = **(int **)(PTR_DAT_00906b3c + 0x40) + 1;
    }
    *(int *)(*(int *)(PTR_DAT_00906b3c + 0x4c) + 0xb4) =
         *(int *)(*(int *)(PTR_DAT_00906b3c + 0x4c) + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != &DAT_00906ae8)) {
      ___freetlocinfo(piVar1);
    }
  }
  return p_Var2->_tfpecode;
}

