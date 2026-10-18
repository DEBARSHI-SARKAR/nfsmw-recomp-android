/* speed.exe 0082234d thunk_FUN_008222a1; analysis pseudocode, not buildable source.
 */

undefined4 thunk_FUN_008222a1(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_dc [204];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (DAT_009c2188 == '\0') {
    uVar3 = 0xfffffff6;
  }
  else {
    DAT_009c21e4 = FUN_0081f86b;
    iVar2 = FUN_00823e0b();
    *param_1 = iVar2;
    piVar1 = (int *)(DAT_009c21f8 + iVar2 * 8);
    *piVar1 = param_2;
    *(undefined1 *)(piVar1 + 1) = 1;
    if (('\0' < DAT_009c218e) && (iStack_8 = 0, *(short *)(param_2 + 6) != 0)) {
      do {
        iStack_c = FUN_00823e2d(param_2,iStack_8);
        if (iStack_c != 0) {
          iStack_c = iStack_c + 4;
          do {
            iStack_10 = FUN_00823e83(&iStack_c,auStack_dc);
            FUN_00822240(auStack_dc,0xffffffff,0);
          } while (iStack_10 != 0);
        }
        iStack_8 = iStack_8 + 1;
      } while (iStack_8 < (int)(uint)*(ushort *)(param_2 + 6));
    }
    uVar3 = 8;
    *(undefined1 *)(piVar1 + 1) = 0;
  }
  return uVar3;
}

