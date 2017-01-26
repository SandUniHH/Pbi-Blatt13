typedef enum
{
  CLIPPED_RIGHT,
  CLIPPED_LEFT,
  CLIPPED_NONE,
  CLIPPED_BOTH
} ClipType;

typedef enum {
  GT_DO_NOT_GROUP_BY_PARENT,
  GT_GROUP_BY_PARENT,
  GT_UNDEFINED_GROUPING
} GtShouldGroupByParent;

typedef enum {
  GT_GRAPHICS_PDF,
  GT_GRAPHICS_PNG,
  GT_GRAPHICS_PS,
  GT_GRAPHICS_SVG
} GtGraphicsOutType;

typedef enum
{
  ARROW_LEFT,
  ARROW_RIGHT,
  ARROW_BOTH,
  ARROW_NONE
} ArrowStatus;

typedef enum
{
  SLANT_NORMAL,
  SLANT_ITALIC
} FontSlant;

typedef enum
{
  WEIGHT_NORMAL,
  WEIGHT_BOLD
} FontWeight;

typedef enum {
  GT_STYLE_QUERY_OK,
  GT_STYLE_QUERY_NOT_SET,
  GT_STYLE_QUERY_ERROR
} GtStyleQueryStatus;

typedef enum {
  GT_CODON_ITERATOR_OK,
  GT_CODON_ITERATOR_END,
  GT_CODON_ITERATOR_ERROR
} GtCodonIteratorStatus;

typedef enum
{
  SWtable_wildcardrange,
  SWtable_ssptab
} KindofSWtable;

typedef enum
{
  GT_ACCESS_TYPE_DIRECTACCESS,
  GT_ACCESS_TYPE_BYTECOMPRESS,
  GT_ACCESS_TYPE_EQUALLENGTH,
  GT_ACCESS_TYPE_BITACCESS,
  GT_ACCESS_TYPE_UCHARTABLES,
  GT_ACCESS_TYPE_USHORTTABLES,
  GT_ACCESS_TYPE_UINT32TABLES,
  GT_ACCESS_TYPE_UNDEFINED
} GtEncseqAccessType;

typedef enum {
  GT_ENCSEQ_OPTS_ENCODE,
  GT_ENCSEQ_OPTS_LOAD,
  GT_ENCSEQ_OPTS_UNDEFINED
} GtEncseqOptionsCreationStrategy;

typedef enum {
  GT_FASTA_READER_REC,
  GT_FASTA_READER_FSM,
  GT_FASTA_READER_SEQIT
} GtFastaReaderType;

typedef enum {
  EXPECTING_SEPARATOR,
  READING_DESCRIPTION,
  READING_SEQUENCE_AFTER_NEWLINE,
  READING_SEQUENCE
} GtFastaReaderState;

typedef enum {
  GT_FILE_MODE_UNCOMPRESSED,
  GT_FILE_MODE_GZIP,
  GT_FILE_MODE_BZIP2
} GtFileMode;

typedef enum {
  GT_HASH_DIRECT,
  GT_HASH_STRING
} GtHashType;

typedef enum {
  BLACK,
  RED
} GtIntervalTreeNodeColor ;

typedef enum
{
  GtCharType, /* \0 terminated string */
  GtFilelengthvaluesType,
  GtUcharType,
  Uint16Type,
  Uint32Type,
  Uint64Type,
  GtUwordType,
  GtUwordBoundType,
  GtBitsequenceType,
  GtPairBwtidxType,
  GtTwobitencodingType,
  GtSpecialcharinfoType,
  GtBitElemType,
  GtUintType
} GtTypespec;

typedef enum {
  OPTION_BOOL,
  OPTION_CHOICE,
  OPTION_DOUBLE,
  OPTION_FILENAME,
  OPTION_HELP,
  OPTION_HELPPLUS,
  OPTION_HELPDEV,
  OPTION_INT,
  OPTION_UINT,
  OPTION_LONG,
  OPTION_ULONG,
  OPTION_RANGE,
  OPTION_STRING,
  OPTION_STRING_ARRAY,
  OPTION_VERSION
} GtOptionType;

typedef enum
{
  GtRadixelemtypeGtUword,
  GtRadixelemtypeGtUwordPair,
  GtRadixelemtypeGtuint64keyPair
} GtRadixelemtype;

typedef enum {
  EMBL_UNDEFINED,
  EMBL_IN_SEQUENCE,
  EMBL_IN_DESCRIPTION
} GtEMBLParserState;

typedef enum {
  TIMER_RUNNING,
  TIMER_STOPPED
} Timerstate;

typedef enum {
  GT_TRANSLATOR_OK,
  GT_TRANSLATOR_END,
  GT_TRANSLATOR_ERROR
} GtTranslatorStatus;

typedef enum {
  Affine_R,
  Affine_D,
  Affine_I,
  Affine_X /* unknown */
} GtAffineAlignEdge;

typedef enum {
  GT_CLUSTERED_SET_ITERATOR_STATUS_OK,
  GT_CLUSTERED_SET_ITERATOR_STATUS_END,
  GT_CLUSTERED_SET_ITERATOR_STATUS_ERROR
} GtClusteredSetIteratorStatus;

typedef enum {
  COIN_FAIR,
  COIN_LOADED,
  COIN_NUM_OF_STATES
} Coin_states;

typedef enum {
  HEAD, /* "Hh" */
  TAIL, /* "Tt" */
  COIN_NUM_OF_SYMBOLS
} Coin_emissions;

typedef enum {
  GT_CONDENSEQ_CREATOR_CONT,
  GT_CONDENSEQ_CREATOR_EOD,
  GT_CONDENSEQ_CREATOR_RESET,
  GT_CONDENSEQ_CREATOR_ERROR
} CesCState ;

typedef enum {
  Linear_R,
  Linear_D,
  Linear_I,
  Linear_X /* unknown */
} LinearAlignEdge;

typedef enum {
  DICE_FAIR,
  DICE_LOADED,
  DICE_NUM_OF_STATES
} Dice_states;

typedef enum {
  ONE,
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX,
  DICE_NUM_OF_SYMBOLS
} Dice_emissions;

typedef enum {
  LEADING_ZEROS,
  REST
} EliasGammaStatus;

typedef enum {
  NO_PARENT,
  ONE_PARENT,
  MULTIPLE_PARENTS
} ParentStatus;

typedef enum {
  TREE_STATUS_UNDETERMINED,
  IS_TREE,
  IS_NOT_A_TREE
} TreeStatus;

typedef enum {
  DFS_WHITE,
  DFS_GRAY,
  DFS_BLACK
} DFSStatus;

typedef enum {
  IN_Q,
  REMAINDER
} GolombStatus;

typedef enum {
  GTF_CDS,
  GTF_exon,
  GTF_start_codon,
  GTF_stop_codon
} GTF_feature_type;

typedef enum {
  GT_HPOL_PROCESSOR_NEW_RECORD,
  GT_HPOL_PROCESSOR_REPLACED,
  GT_HPOL_PROCESSOR_NOT_REPLACED
} GtHpolProcessorAddToHashResult;

typedef enum {
  GT_MAPPINGTYPE_STRING,
  GT_MAPPINGTYPE_INTEGER
} GtMappingType;

typedef enum {
  GT_MATCH_DIRECT,
  GT_MATCH_REVERSE
} GtMatchDirection;

typedef enum {
  GT_MATCHER_STATUS_OK,
  GT_MATCHER_STATUS_END,
  GT_MATCHER_STATUS_ERROR
} GtMatchIteratorStatus;

typedef enum {
  GT_MD5SET_ERROR,
  GT_MD5SET_NOT_FOUND,
  GT_MD5SET_FOUND,
  GT_MD5SET_RC_FOUND
} GtMD5SetStatus;

typedef enum {
  Match,
  Mismatch,
  Replacement,
  Deletion,
  Insertion
} AlignmentEoptype;

typedef enum {
  GT_ORF_ITERATOR_OK,
  GT_ORF_ITERATOR_END,
  GT_ORF_ITERATOR_ERROR
} GtORFIteratorStatus;

typedef enum
{
  GT_RBTREE_ASCENDING,
  GT_RBTREE_DESCENDING,
  GT_RBTREE_RANDOMORDER
} GtRBTreeSearchOrder;

typedef enum
{
 GtRBTreeBuild,
  GtRBTreeBuildDelete,
  GtRBTreeDelete,
  GtRBTreeFind
} GtRBTreeDoAction;

typedef enum
{
  GT_RBTREE_PREORDER,
  GT_RBTREE_POSTORDER,
  GT_RBTREE_ENDORDER,
  GT_RBTREE_LEAF
} GtRBTreeContext;

typedef enum {
  GT_SAMPLING_REGULAR,
  GT_SAMPLING_PAGES
} GtSamplingMethod;

typedef enum {
  GT_SELECT_AND,
  GT_SELECT_OR
} GtSelectLogic;

typedef enum {
  GT_SPEC_SUCCESS,
  GT_SPEC_FAILURE,
  GT_SPEC_RUNTIME_ERROR
} GtSpecResultStatus;

typedef enum {
  GT_TIR_STREAM_STATE_START,
  GT_TIR_STREAM_STATE_REGIONS,
  GT_TIR_STREAM_STATE_COMMENTS,
  GT_TIR_STREAM_STATE_FEATURES
} GtTIRStreamState;

typedef enum {
  TRANSCRIPT_FEATURE_TYPE_SINGLE,
  TRANSCRIPT_FEATURE_TYPE_INITIAL,
  TRANSCRIPT_FEATURE_TYPE_INTERNAL,
  TRANSCRIPT_FEATURE_TYPE_TERMINAL,
  TRANSCRIPT_FEATURE_TYPE_UNDETERMINED
} GtTranscriptFeatureType;

typedef enum
{
  MERGEABLE_LEFTSIDE_A_BEFORE_B,
  MERGEABLE_LEFTSIDE_A_EQUALS_B,
  MERGEABLE_LEFTSIDE_A_AFTER_B,
  NON_MERGEABLE_LEFTSIDE
} Leftsidestatus;

typedef enum
{
  MERGEABLE_RIGHTSIDE_A_BEFORE_B,
  MERGEABLE_RIGHTSIDE_A_EQUALS_B,
  MERGEABLE_RIGHTSIDE_A_AFTER_B,
  NON_MERGEABLE_RIGHTSIDE
} Rightsidestatus;

typedef enum {
  DNA_E_STATE,
  DNA_I_STATE,
  DNA_NUMOFSTATES
} DnaStates;

typedef enum {
  DNA_I_N,     /* deletion     |01|0^14
                  or intron    |01|length */
  DNA_E_N,     /* deletion     |01|0^14
                  or intron    |01|length */
  DNA_E_NM,    /* match        |00|length
                  or mismatch  |11|0^14   */
  DNA_I_NM,    /* match        |00|length
                  or mismatch  |11|0^14   */
  DNA_E_M,     /* insertion    |10|0^14   */
  DNA_I_M,     /* insertion    |10|0^14   */
  DNA_NUMOFRETRACE
} DnaRetrace;

typedef enum {
  DUMMY_STATUS_UNDEFINED,
  DUMMY_JUST_SET,
  FIRST_EOP_AFTER_DUMMY_SET,
  ENSURE_SINGLE_MATCH,
  NUMOFDUMMYSTATUSES
} Dummystatus;

typedef enum {
  E_STATE,
  IA_STATE,
  IB_STATE,
  IC_STATE,
  PROTEIN_NUMOFSTATES
} States;

typedef enum {
  /*         GS2:       representation as multi editoperation: */

  E_N3M,  /* C_N3M      match               |00|00|length                   */
          /*            or mismatch         |11|00|0^12                     */
  E_N2M,  /* C_N2M      mismatch + 1 gap    |11|01|0^12                     */
  E_N1M,  /* C_N1M      mismatch + 2 gaps   |11|10|0^12                     */
  E_M,    /* C_M        insertion           |10|00|0^12                     */
  E_N3,   /* C_N3       deletion            |01|00|0^12                     */
          /*            or intron                                           */
  E_N2,   /* C_N2       deletion + 1 gap    |01|01|0^12                     */
          /*            or intron                                           */
  E_N1,   /* C_N        deletion + 2 gaps   |01|10|0^12                     */
          /*            or intron                                           */
  IA_N3M, /* I_N3M      match               |00|00|length                   */
          /*            or mismatch         |11|00|0^12                     */
  IB_N2M, /* I_N2M      match               |00|01|length (XXX: necessary?) */
          /*            or mismatch         |11|01|0^12                     */
  IC_N1M, /* I_N1M      match               |00|10|length (XXX: necessary?) */
          /*            or mismatch         |11|10|0^12                     */
  IA_N1,  /* IA_N       intron              |01|00|length                   */
  IB_N1,  /* IB_N       intron keep 1 base  |01|01|length                   */
  IC_N1,  /* IC_N       intron keep 2 bases |01|10|length                   */

  NUMOFRETRACE
} Retrace;

typedef enum {
  GT_DONOR_TYPE,
  GC_DONOR_TYPE,
  AG_ACCEPTOR_TYPE,
  NUMOFTYPES
} Termtype;

typedef enum {
  SQUASH,
  TRUE_DON,
  TRUE_ACC,
  FALSE_DON,
  FALSE_ACC
} SeqFileType;

typedef enum {
  GTH_RELAXED,
  GTH_STRICT,
  GTH_MINIMAL,
  NUMOFCUTOFFMODES
} GthCutoffmode;

typedef enum {
  GTH_DC_NONE,
  GTH_DC_ID,
  GTH_DC_DESC,
  GTH_DC_SEQ,
  GTH_DC_BOTH,
  GTH_NUM_OF_DC_MODES
} GthDuplicateCheck;

typedef enum {
  EOP_TYPE_MATCH,
  EOP_TYPE_INTRON,
  EOP_TYPE_INTRON_WITH_1_BASE_LEFT,
  EOP_TYPE_INTRON_WITH_2_BASES_LEFT,
  EOP_TYPE_MISMATCH,
  EOP_TYPE_DELETION,
  EOP_TYPE_INSERTION,
  EOP_TYPE_MISMATCH_WITH_1_GAP,
  EOP_TYPE_MISMATCH_WITH_2_GAPS,
  EOP_TYPE_DELETION_WITH_1_GAP,
  EOP_TYPE_DELETION_WITH_2_GAPS,
  NUM_OF_EOP_TYPES
} Eoptype;

typedef enum {
  ALIGNMENTSCORE_SPLIT,
  COVERAGE_SPLIT,
  UNDEF_SPLIT
} Splitmode;

typedef enum {
  DNA_ALPHA,
  PROTEIN_ALPHA,
  MIXED_ALPHA,   /* not a real alphabet type, but used to denote that reference
                    files with DNA_ALPHA alphabets and with PROTEIN_ALPHA
                    alphabets are used at the same time */
  UNDEF_ALPHA
} GthAlphatype;

typedef enum
{
  NOSPAN,
  DISCARD,
  REPLACE,
  NUMOFSPANACTIONS
} Spancheck;

typedef enum {
  GT_PHMM_CUTOFF_TC,
  GT_PHMM_CUTOFF_GA,
  GT_PHMM_CUTOFF_NONE
} GtPdomCutoff;

typedef enum {
  PPT_IN,
  PPT_OUT,
  PPT_UBOX,
  PPT_N,
  PPT_NOF_STATES
} GtPPTStates;

typedef enum {
  GT_LTRHARVEST_STREAM_STATE_START,
  GT_LTRHARVEST_STREAM_STATE_REGIONS,
  GT_LTRHARVEST_STREAM_STATE_COMMENTS,
  GT_LTRHARVEST_STREAM_STATE_FEATURES
} GtLTRharvestStreamState;

typedef enum
{
  Limdfssuccess,  /* success of traversal */
  Limdfscontinue, /* no success, but still have the chance to find result */
  Limdfsstop      /* no success possible */
} Limdfsstatus;

typedef enum
{
  GLOBALCHAINING,              /* global chaining without gap costs */
  GLOBALCHAININGWITHGAPCOST,   /* global chaining with L1 gap costs */
  GLOBALCHAININGWITHOVERLAPS,  /* chaining with overlaps */
  GLOBALCHAININGALLCHAINS,     /* global chaining with output of all chains */
  LOCALCHAININGMAX,            /* local chaining; one maximum is reported */
  LOCALCHAININGTHRESHOLD,      /* local chaining; all chains >= minscore */
  LOCALCHAININGBEST,           /* local chaining; k best local chains */
  LOCALCHAININGPERCENTAWAY     /* local chaining; percent away from best */
} GtChain2Dimkind;

typedef enum
{ /* keep the order consistent with gt_splt_arguments */
  GT_DIAGBANDSEED_SPLT_STRUCT,
  GT_DIAGBANDSEED_SPLT_ULONG,
  GT_DIAGBANDSEED_SPLT_BYTESTRING,
  GT_DIAGBANDSEED_SPLT_UNDEFINED
} GtDiagbandseedPairlisttype;

typedef enum
{
  GtDeletionOp,
  GtInsertionOp,
  GtMismatchOp,
  GtMatchOp,
  GtUndefinedOp
} GtEopType;

typedef enum
{
  backtracepath_mismatch,
  backtracepath_deletion,
  backtracepath_insertion
} Backtracepathflag;

typedef enum
{
  GT_OUTSENSE_TRIM_ALWAYS,
  GT_OUTSENSE_TRIM_ON_NEW_PP,
  GT_OUTSENSE_TRIM_NEVER
} GtTrimmingStrategy;

typedef enum
{
  GT_EXTEND_CHAR_ACCESS_ENCSEQ,
  GT_EXTEND_CHAR_ACCESS_ENCSEQ_READER,
  GT_EXTEND_CHAR_ACCESS_DIRECT,
  GT_EXTEND_CHAR_ACCESS_ANY
} GtExtendCharAccess;

typedef enum
{
  Popitv,
  Splititv,
  Processitv,
  Pushitv,
  Processcontext
} Runlimdfsstate;

typedef enum
{
  Notraceback,
  Insertbit,
  Replacebit,
  Deletebit
} LocaliTracebit;

typedef enum {
  GT_INDEX_OPTIONS_UNDEFINED,
  GT_INDEX_OPTIONS_ESA,
  GT_INDEX_OPTIONS_PACKED
} GtIndexOptionsIndexType;

typedef enum
{
  gapextdidx,
  lambdaidx,
  Kidx,
  Hidx,
  alphaidx,
  betaidx
} GT_ValuesindeX;

typedef enum
{
  Qualabsolute,
  Qualpercentaway,
  Qualbestof
} Qualificationtag;

typedef enum
{
  Gt_Seed_display,
  Gt_Seqlength_display,
  Gt_Evalue_display,
  Gt_Seqdesc_display,
  Gt_Bitscore_display
} GtSeedExtendDisplay;

typedef enum
{
  GT_CONTFIND_OFF, /* no search for containments */
  GT_CONTFIND_NO,  /* there is no containment */
  GT_CONTFIND_EQ,  /* u and v are (approx) equal */
  GT_CONTFIND_U,   /* u is (approx) contained in v */
  GT_CONTFIND_V    /* v is (approx) contained in u */
} GtContfind;

typedef enum {
  GT_CONTIGS_GRAPH_JUNCTION,
  GT_CONTIGS_GRAPH_SINGLE_END,
  GT_CONTIGS_GRAPH_MULTIPLE_END,
  GT_CONTIGS_GRAPH_CIRCULAR
} GtContigsGraphPathEndType;

typedef enum
{
  GT_OVLFIND_SPM,        /* containments are not determined;
                            suf-pref matches are determined,
                            including the one that are also containments */
  GT_OVLFIND_CNT,        /* containments are determined;
                            suf-pref matches are not determined */
  GT_OVLFIND_ALL,        /* containments are determined;
                            suf-pref matches are detemined,
                            including the one that are also containments */
  GT_OVLFIND_PROPER_SPM  /* containments are determined;
                            suf-pref matches are determined
                            only if there is no containment */
} GtOvlfindMode;

typedef enum {
  GT_SPMLIST_BIN32,
  GT_SPMLIST_BIN64,
  GT_SPMLIST_ASCII   /* = any other value */,
} GtSpmlistFormat;

typedef enum {
  GT_STRGRAPH_V_VACANT,
  GT_STRGRAPH_V_INPLAY,
  GT_STRGRAPH_V_ELIMINATED,
  GT_STRGRAPH_V_MARKED
} GtStrgraphVmark;

typedef enum {
  GT_STRGRAPH_PREPARATION,
  GT_STRGRAPH_CONSTRUCTION,
  GT_STRGRAPH_SORTED_BY_L,
  GT_STRGRAPH_LOADED_FROM_FILE
} GtStrgraphState;

typedef enum {
  GT_STRGRAPH_DOT,     /* Graphviz, e.g.: dot -Tpdf -o graph.pdf graph.dot */
  GT_STRGRAPH_DOT_BI,  /* as _DOT, but bidirected */
  GT_STRGRAPH_SPM,     /* reoutput spm from graph */
  GT_STRGRAPH_ADJLIST, /* adjacence list of each vertex */
  GT_STRGRAPH_BIN,     /* binary format, for gt_strgraph_new_from_file */
  GT_STRGRAPH_ASQG,    /* sga format, plain text */
  GT_STRGRAPH_ASQG_GZ  /* sga format, gzipped */
} GtStrgraphFormat;

typedef enum {
  GT_STRGRAPH_VTYPE_B,
  GT_STRGRAPH_VTYPE_E,
  GT_STRGRAPH_VTYPE_A
} GtStrgraphVtype;

typedef enum {
  GT_SEQABSTRACT_UNDEF,
  GT_SEQABSTRACT_STRING,
  GT_SEQABSTRACT_ENCSEQ
} GtSeqabstractType;

typedef enum
{
  GtSfxGtBitsequence,
  GtSfxunsignedlong,
  GtSfxuint32_t
} GtSfxmappedrangetype;

typedef enum
{
  GT_SAIN_PLAINSEQ,
  GT_SAIN_INTSEQ,
  GT_SAIN_ENCSEQ,
  GT_SAIN_BARE_ENCSEQ
} GtSainSeqtype;

typedef enum
{
  BSRS_stream_words,
  BSRS_stream_single,
  BSRS_reader_single,
  BSRS_stream_reader_single,
  BSRS_reader_multi,
  BSRS_stream_reader_multi,
  BSRS_stream_reader_multi3,
  BSRS_hashfirstcodes
} Bitstreamreadmode;

typedef enum
{
  Fmindextype,
  Esaindextype,
  Packedindextype
} Indextype;

typedef enum {
  GT_READJOINER_CNTTEST_SHOWLIST,
  GT_READJOINER_CNTTEST_BRUTEFORCE,
  GT_READJOINER_CNTTEST_KMP,
  GT_READJOINER_CNTTEST_ESA
} GtReadjoinerCnttestTestspec;

typedef enum {
  GT_READJOINER_SPMTEST_SHOWLIST,
  GT_READJOINER_SPMTEST_BRUTEFORCE,
  GT_READJOINER_SPMTEST_KMP,
  GT_READJOINER_SPMTEST_GUSFIELD
} GtReadjoinerSpmtestTestspec;

typedef enum
{
  Autoprefixlength,
  Undeterminedprefixlength,
  Determinedprefixlength
} Prefixlengthflag;

typedef enum
{
  Onlyshowsum,
  Showfirst,
  Showsecond
} Summode;
