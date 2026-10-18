/* speed.exe 004a08a0 FUN_004a08a0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_004a08a0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (*(code *)PTR_FUN_008ee4d4)(pcVar2,pcVar4 + (1 - (int)(pcVar2 + 1)));
  }
  pvVar3 = (void *)param_1[4];
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,0x14,*(int *)((int)pvVar3 + -4),(_func_void_void_ptr *)&DAT_0048e0c0);
    (*(code *)PTR_FUN_008ee4d4)((int)pvVar3 + -4,0x14);
  }
  return;
}

