/* speed.exe 007d0031 FUN_007d0031; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007c51b2 __abnormal_termination
 * calls 007c50b0 _FindAndUnlinkFrame
 * calls 007d03d0 ___DestructExceptionObject
 * calls 007c5080 IsExceptionObjectToBeDestroyed
 */

void FUN_007d0031(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x20);
  _FindAndUnlinkFrame(*(FrameInfo **)(unaff_EBP + -0x1c));
  p_Var1 = __getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x38);
  p_Var1 = __getptd();
  p_Var1->_translator = *(void **)(unaff_EBP + -0x34);
  if ((((**(int **)(unaff_EBP + 8) == -0x1f928c9d) &&
       (*(int *)(*(int *)(unaff_EBP + 8) + 0x10) == 3)) &&
      ((*(int *)(*(int *)(unaff_EBP + 8) + 0x14) == 0x19930520 ||
       (*(int *)(*(int *)(unaff_EBP + 8) + 0x14) == 0x19930521)))) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x30) != 0)))) {
    iVar2 = IsExceptionObjectToBeDestroyed(*(void **)(*(int *)(unaff_EBP + 8) + 0x18));
    if (iVar2 != 0) {
      iVar2 = __abnormal_termination();
      ___DestructExceptionObject(*(undefined4 *)(unaff_EBP + 8),iVar2);
    }
  }
  return;
}

