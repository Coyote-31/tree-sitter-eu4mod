#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 3
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_objectTypes = 4,
  anon_sym_spriteType = 5,
  anon_sym_textSpriteType = 6,
  anon_sym_corneredTileSpriteType = 7,
  anon_sym_maskedShieldType = 8,
  anon_sym_animatedmaptext = 9,
  anon_sym_name = 10,
  anon_sym_x = 11,
  anon_sym_y = 12,
  aux_sym__statement_gfx_name_token1 = 13,
  aux_sym__statement_gfx_name_token2 = 14,
  anon_sym_path = 15,
  anon_sym_archive = 16,
  aux_sym__statement_mod_archive_token1 = 17,
  anon_sym_remote_file_id = 18,
  aux_sym__statement_mod_remote_file_id_token1 = 19,
  anon_sym_version = 20,
  aux_sym__statement_mod_version_token1 = 21,
  anon_sym_picture = 22,
  aux_sym__statement_mod_picture_token1 = 23,
  anon_sym_supported_version = 24,
  aux_sym__statement_mod_supported_version_token1 = 25,
  anon_sym_replace_path = 26,
  aux_sym__mod_replace_path_folder_token1 = 27,
  anon_sym_tags = 28,
  aux_sym__mod_tags_keyword_token1 = 29,
  aux_sym__mod_tags_keyword_token2 = 30,
  aux_sym__mod_tags_keyword_token3 = 31,
  aux_sym__mod_tags_keyword_token4 = 32,
  aux_sym__mod_tags_keyword_token5 = 33,
  aux_sym__mod_tags_keyword_token6 = 34,
  aux_sym__mod_tags_keyword_token7 = 35,
  aux_sym__mod_tags_keyword_token8 = 36,
  aux_sym__mod_tags_keyword_token9 = 37,
  aux_sym__mod_tags_keyword_token10 = 38,
  aux_sym__mod_tags_keyword_token11 = 39,
  aux_sym__mod_tags_keyword_token12 = 40,
  aux_sym__mod_tags_keyword_token13 = 41,
  aux_sym__mod_tags_keyword_token14 = 42,
  aux_sym__mod_tags_keyword_token15 = 43,
  aux_sym__mod_tags_keyword_token16 = 44,
  aux_sym__mod_tags_keyword_token17 = 45,
  aux_sym__mod_tags_keyword_token18 = 46,
  aux_sym__mod_tags_keyword_token19 = 47,
  aux_sym__mod_tags_keyword_token20 = 48,
  aux_sym__mod_tags_keyword_token21 = 49,
  aux_sym__mod_tags_keyword_token22 = 50,
  anon_sym_dependencies = 51,
  anon_sym_cursor_offset = 52,
  aux_sym__statement_gfx_textureFile_token1 = 53,
  aux_sym__statement_gfx_textureFile_token2 = 54,
  anon_sym_noOfFrames = 55,
  anon_sym_overlay_frames_per_row = 56,
  anon_sym_overlay_rows = 57,
  anon_sym_effectFile = 58,
  aux_sym__statement_gfx_effectFile_token1 = 59,
  anon_sym_animation = 60,
  anon_sym_animationmaskfile = 61,
  anon_sym_animationtexturefile = 62,
  aux_sym__animation_entry_dds_token1 = 63,
  anon_sym_animationrotation = 64,
  anon_sym_animationlooping = 65,
  anon_sym_animationtime = 66,
  anon_sym_animationdelay = 67,
  anon_sym_animationrotationoffset = 68,
  anon_sym_animationtexturescale = 69,
  anon_sym_animationblendmode = 70,
  anon_sym_DQUOTEadd_DQUOTE = 71,
  anon_sym_DQUOTEmultiply_DQUOTE = 72,
  anon_sym_DQUOTEoverlay_DQUOTE = 73,
  anon_sym_animationtype = 74,
  anon_sym_DQUOTEscrolling_DQUOTE = 75,
  anon_sym_DQUOTErotating_DQUOTE = 76,
  anon_sym_DQUOTEpulsing_DQUOTE = 77,
  anon_sym_animationframes = 78,
  anon_sym_size = 79,
  anon_sym_borderSize = 80,
  anon_sym_allwaystransparent = 81,
  anon_sym_legacy_lazy_load = 82,
  anon_sym_clicksound = 83,
  anon_sym_click = 84,
  anon_sym_speed = 85,
  anon_sym_textblock = 86,
  anon_sym_text = 87,
  anon_sym_color = 88,
  anon_sym_font = 89,
  anon_sym_position = 90,
  anon_sym_format = 91,
  anon_sym_centre = 92,
  anon_sym_cull_distance = 93,
  aux_sym__statement_gfx_cull_distance_token1 = 94,
  sym_assign_equal = 95,
  sym_string = 96,
  sym_number = 97,
  aux_sym__number_precision_1_token1 = 98,
  aux_sym__number_precision_2_token1 = 99,
  aux_sym_float_token1 = 100,
  sym_integer = 101,
  aux_sym__integer_positive_token1 = 102,
  sym_byte = 103,
  sym_angle = 104,
  anon_sym_true = 105,
  anon_sym_false = 106,
  anon_sym_yes = 107,
  anon_sym_no = 108,
  sym_comment = 109,
  sym_file = 110,
  sym_dot_mod = 111,
  sym_dot_gfx = 112,
  sym__spriteTypes = 113,
  sym__spriteTypes_block = 114,
  sym__spriteTypes_statement = 115,
  sym__spriteTypes_type = 116,
  sym__objectTypes = 117,
  sym__objectTypes_block = 118,
  sym__objectTypes_type = 119,
  sym__spriteType = 120,
  sym__spriteType_block = 121,
  sym__textSpriteType = 122,
  sym__textSpriteType_block = 123,
  sym__corneredTileSpriteType = 124,
  sym__corneredTileSpriteType_block = 125,
  sym__maskedShieldType = 126,
  sym__maskedShieldType_block = 127,
  sym__animatedmaptext = 128,
  sym__animatedmaptext_block = 129,
  sym__statement_name = 130,
  sym__statement_xy_integer = 131,
  sym__entry_x_integer = 132,
  sym__entry_y_integer = 133,
  sym__statement_xy_float = 134,
  sym__entry_x_float = 135,
  sym__entry_y_float = 136,
  sym__statement_gfx_name = 137,
  sym__statement_mod_path = 138,
  sym__statement_mod_archive = 139,
  sym__statement_mod_remote_file_id = 140,
  sym__statement_mod_version = 141,
  sym__statement_mod_picture = 142,
  sym__statement_mod_supported_version = 143,
  sym__statement_mod_replace_path = 144,
  sym__mod_replace_path_folder = 145,
  sym__statement_mod_tags = 146,
  sym__mod_tags_block = 147,
  sym__mod_tags_keyword = 148,
  sym__statement_mod_dependencies = 149,
  sym__mod_dependencies_block = 150,
  sym__statement_gfx_cursor_offset = 151,
  sym__statement_gfx_textureFile = 152,
  sym__statement_gfx_noOfFrames = 153,
  sym__statement_gfx_overlay_frames_per_row = 154,
  sym__statement_gfx_overlay_rows = 155,
  sym__statement_gfx_effectFile = 156,
  sym__statement_gfx_animation = 157,
  sym__gfx_animation_block = 158,
  sym__animation_entry_dds = 159,
  sym__animation_entry_angle = 160,
  sym__animation_entry_bool = 161,
  sym__animation_entry_time = 162,
  sym__animation_entry_xy_float = 163,
  sym__animation_entry_blendmode = 164,
  sym__animation_entry_type = 165,
  sym__animation_entry_frames = 166,
  sym__statement_gfx_size = 167,
  sym__statement_gfx_borderSize = 168,
  sym__statement_gfx_allwaystransparent = 169,
  sym__statement_gfx_legacy_lazy_load = 170,
  sym__statement_gfx_clicksound = 171,
  sym__statement_gfx_speed = 172,
  sym__statement_gfx_textblock = 173,
  sym__gfx_textblock = 174,
  sym__statement_gfx_text = 175,
  sym__statement_gfx_color = 176,
  sym__statement_gfx_font = 177,
  sym__statement_gfx_position = 178,
  sym__statement_gfx_format = 179,
  sym__statement_gfx_cull_distance = 180,
  sym_float = 181,
  sym__float_positive = 182,
  sym__integer_positive = 183,
  sym__yes_no = 184,
  aux_sym_dot_mod_repeat1 = 185,
  aux_sym_dot_gfx_repeat1 = 186,
  aux_sym__spriteTypes_block_repeat1 = 187,
  aux_sym__objectTypes_block_repeat1 = 188,
  aux_sym__spriteType_block_repeat1 = 189,
  aux_sym__textSpriteType_block_repeat1 = 190,
  aux_sym__corneredTileSpriteType_block_repeat1 = 191,
  aux_sym__maskedShieldType_block_repeat1 = 192,
  aux_sym__animatedmaptext_block_repeat1 = 193,
  aux_sym__mod_tags_block_repeat1 = 194,
  aux_sym__mod_dependencies_block_repeat1 = 195,
  aux_sym__gfx_animation_block_repeat1 = 196,
  aux_sym__animation_entry_frames_repeat1 = 197,
  aux_sym__gfx_textblock_repeat1 = 198,
  alias_sym_dependencies = 199,
  alias_sym_name_value = 200,
  alias_sym_statement = 201,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_objectTypes] = "identifier",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_textSpriteType] = "identifier",
  [anon_sym_corneredTileSpriteType] = "identifier",
  [anon_sym_maskedShieldType] = "identifier",
  [anon_sym_animatedmaptext] = "identifier",
  [anon_sym_name] = "name_identifier",
  [anon_sym_x] = "identifier",
  [anon_sym_y] = "identifier",
  [aux_sym__statement_gfx_name_token1] = "name_value",
  [aux_sym__statement_gfx_name_token2] = "name_gfx_value",
  [anon_sym_path] = "identifier",
  [anon_sym_archive] = "identifier",
  [aux_sym__statement_mod_archive_token1] = "string",
  [anon_sym_remote_file_id] = "identifier",
  [aux_sym__statement_mod_remote_file_id_token1] = "string",
  [anon_sym_version] = "identifier",
  [aux_sym__statement_mod_version_token1] = "string",
  [anon_sym_picture] = "identifier",
  [aux_sym__statement_mod_picture_token1] = "string",
  [anon_sym_supported_version] = "identifier",
  [aux_sym__statement_mod_supported_version_token1] = "string",
  [anon_sym_replace_path] = "identifier",
  [aux_sym__mod_replace_path_folder_token1] = "string",
  [anon_sym_tags] = "identifier",
  [aux_sym__mod_tags_keyword_token1] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token2] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token3] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token4] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token5] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token6] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token7] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token8] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token9] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token10] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token11] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token12] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token13] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token14] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token15] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token16] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token17] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token18] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token19] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token20] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token21] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token22] = "tags_keyword",
  [anon_sym_dependencies] = "identifier",
  [anon_sym_cursor_offset] = "identifier",
  [aux_sym__statement_gfx_textureFile_token1] = "identifier",
  [aux_sym__statement_gfx_textureFile_token2] = "string",
  [anon_sym_noOfFrames] = "identifier",
  [anon_sym_overlay_frames_per_row] = "identifier",
  [anon_sym_overlay_rows] = "identifier",
  [anon_sym_effectFile] = "identifier",
  [aux_sym__statement_gfx_effectFile_token1] = "string",
  [anon_sym_animation] = "identifier",
  [anon_sym_animationmaskfile] = "identifier",
  [anon_sym_animationtexturefile] = "identifier",
  [aux_sym__animation_entry_dds_token1] = "string",
  [anon_sym_animationrotation] = "identifier",
  [anon_sym_animationlooping] = "identifier",
  [anon_sym_animationtime] = "identifier",
  [anon_sym_animationdelay] = "identifier",
  [anon_sym_animationrotationoffset] = "identifier",
  [anon_sym_animationtexturescale] = "identifier",
  [anon_sym_animationblendmode] = "identifier",
  [anon_sym_DQUOTEadd_DQUOTE] = "string",
  [anon_sym_DQUOTEmultiply_DQUOTE] = "string",
  [anon_sym_DQUOTEoverlay_DQUOTE] = "string",
  [anon_sym_animationtype] = "identifier",
  [anon_sym_DQUOTEscrolling_DQUOTE] = "string",
  [anon_sym_DQUOTErotating_DQUOTE] = "string",
  [anon_sym_DQUOTEpulsing_DQUOTE] = "string",
  [anon_sym_animationframes] = "identifier",
  [anon_sym_size] = "identifier",
  [anon_sym_borderSize] = "identifier",
  [anon_sym_allwaystransparent] = "identifier",
  [anon_sym_legacy_lazy_load] = "identifier",
  [anon_sym_clicksound] = "identifier",
  [anon_sym_click] = "keywords",
  [anon_sym_speed] = "identifier",
  [anon_sym_textblock] = "identifier",
  [anon_sym_text] = "identifier",
  [anon_sym_color] = "identifier",
  [anon_sym_font] = "identifier",
  [anon_sym_position] = "identifier",
  [anon_sym_format] = "identifier",
  [anon_sym_centre] = "keywords",
  [anon_sym_cull_distance] = "identifier",
  [aux_sym__statement_gfx_cull_distance_token1] = "float",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [aux_sym__number_precision_1_token1] = "number",
  [aux_sym__number_precision_2_token1] = "number",
  [aux_sym_float_token1] = "float_token1",
  [sym_integer] = "integer",
  [aux_sym__integer_positive_token1] = "integer",
  [sym_byte] = "byte",
  [sym_angle] = "angle",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "boolean",
  [anon_sym_no] = "boolean",
  [sym_comment] = "comment",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_dot_gfx] = "dot_gfx",
  [sym__spriteTypes] = "types_definition",
  [sym__spriteTypes_block] = "_spriteTypes_block",
  [sym__spriteTypes_statement] = "_spriteTypes_statement",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__objectTypes] = "types_definition",
  [sym__objectTypes_block] = "_objectTypes_block",
  [sym__objectTypes_type] = "_objectTypes_type",
  [sym__spriteType] = "type_definition",
  [sym__spriteType_block] = "_spriteType_block",
  [sym__textSpriteType] = "type_definition",
  [sym__textSpriteType_block] = "_textSpriteType_block",
  [sym__corneredTileSpriteType] = "type_definition",
  [sym__corneredTileSpriteType_block] = "_corneredTileSpriteType_block",
  [sym__maskedShieldType] = "type_definition",
  [sym__maskedShieldType_block] = "_maskedShieldType_block",
  [sym__animatedmaptext] = "type_definition",
  [sym__animatedmaptext_block] = "_animatedmaptext_block",
  [sym__statement_name] = "_statement_name",
  [sym__statement_xy_integer] = "_statement_xy_integer",
  [sym__entry_x_integer] = "_entry_x_integer",
  [sym__entry_y_integer] = "_entry_y_integer",
  [sym__statement_xy_float] = "_statement_xy_float",
  [sym__entry_x_float] = "_entry_x_float",
  [sym__entry_y_float] = "_entry_y_float",
  [sym__statement_gfx_name] = "statement",
  [sym__statement_mod_path] = "_statement_mod_path",
  [sym__statement_mod_archive] = "_statement_mod_archive",
  [sym__statement_mod_remote_file_id] = "_statement_mod_remote_file_id",
  [sym__statement_mod_version] = "_statement_mod_version",
  [sym__statement_mod_picture] = "_statement_mod_picture",
  [sym__statement_mod_supported_version] = "_statement_mod_supported_version",
  [sym__statement_mod_replace_path] = "_statement_mod_replace_path",
  [sym__mod_replace_path_folder] = "_mod_replace_path_folder",
  [sym__statement_mod_tags] = "_statement_mod_tags",
  [sym__mod_tags_block] = "_mod_tags_block",
  [sym__mod_tags_keyword] = "_mod_tags_keyword",
  [sym__statement_mod_dependencies] = "_statement_mod_dependencies",
  [sym__mod_dependencies_block] = "_mod_dependencies_block",
  [sym__statement_gfx_cursor_offset] = "statement",
  [sym__statement_gfx_textureFile] = "statement",
  [sym__statement_gfx_noOfFrames] = "statement",
  [sym__statement_gfx_overlay_frames_per_row] = "statement",
  [sym__statement_gfx_overlay_rows] = "statement",
  [sym__statement_gfx_effectFile] = "statement",
  [sym__statement_gfx_animation] = "statement",
  [sym__gfx_animation_block] = "_gfx_animation_block",
  [sym__animation_entry_dds] = "_animation_entry_dds",
  [sym__animation_entry_angle] = "_animation_entry_angle",
  [sym__animation_entry_bool] = "_animation_entry_bool",
  [sym__animation_entry_time] = "_animation_entry_time",
  [sym__animation_entry_xy_float] = "_animation_entry_xy_float",
  [sym__animation_entry_blendmode] = "_animation_entry_blendmode",
  [sym__animation_entry_type] = "_animation_entry_type",
  [sym__animation_entry_frames] = "_animation_entry_frames",
  [sym__statement_gfx_size] = "_statement_gfx_size",
  [sym__statement_gfx_borderSize] = "statement",
  [sym__statement_gfx_allwaystransparent] = "statement",
  [sym__statement_gfx_legacy_lazy_load] = "statement",
  [sym__statement_gfx_clicksound] = "statement",
  [sym__statement_gfx_speed] = "statement",
  [sym__statement_gfx_textblock] = "statement",
  [sym__gfx_textblock] = "_gfx_textblock",
  [sym__statement_gfx_text] = "_statement_gfx_text",
  [sym__statement_gfx_color] = "_statement_gfx_color",
  [sym__statement_gfx_font] = "_statement_gfx_font",
  [sym__statement_gfx_position] = "_statement_gfx_position",
  [sym__statement_gfx_format] = "_statement_gfx_format",
  [sym__statement_gfx_cull_distance] = "_statement_gfx_cull_distance",
  [sym_float] = "float",
  [sym__float_positive] = "_float_positive",
  [sym__integer_positive] = "_integer_positive",
  [sym__yes_no] = "_yes_no",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__objectTypes_block_repeat1] = "_objectTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__textSpriteType_block_repeat1] = "_textSpriteType_block_repeat1",
  [aux_sym__corneredTileSpriteType_block_repeat1] = "_corneredTileSpriteType_block_repeat1",
  [aux_sym__maskedShieldType_block_repeat1] = "_maskedShieldType_block_repeat1",
  [aux_sym__animatedmaptext_block_repeat1] = "_animatedmaptext_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym__gfx_animation_block_repeat1] = "_gfx_animation_block_repeat1",
  [aux_sym__animation_entry_frames_repeat1] = "_animation_entry_frames_repeat1",
  [aux_sym__gfx_textblock_repeat1] = "_gfx_textblock_repeat1",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_name_value] = "name_value",
  [alias_sym_statement] = "statement",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_objectTypes] = anon_sym_spriteTypes,
  [anon_sym_spriteType] = anon_sym_spriteTypes,
  [anon_sym_textSpriteType] = anon_sym_spriteTypes,
  [anon_sym_corneredTileSpriteType] = anon_sym_spriteTypes,
  [anon_sym_maskedShieldType] = anon_sym_spriteTypes,
  [anon_sym_animatedmaptext] = anon_sym_spriteTypes,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_x] = anon_sym_spriteTypes,
  [anon_sym_y] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_name_token1] = aux_sym__statement_gfx_name_token1,
  [aux_sym__statement_gfx_name_token2] = aux_sym__statement_gfx_name_token2,
  [anon_sym_path] = anon_sym_spriteTypes,
  [anon_sym_archive] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_archive_token1] = sym_string,
  [anon_sym_remote_file_id] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_remote_file_id_token1] = sym_string,
  [anon_sym_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_version_token1] = sym_string,
  [anon_sym_picture] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_picture_token1] = sym_string,
  [anon_sym_supported_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_supported_version_token1] = sym_string,
  [anon_sym_replace_path] = anon_sym_spriteTypes,
  [aux_sym__mod_replace_path_folder_token1] = sym_string,
  [anon_sym_tags] = anon_sym_spriteTypes,
  [aux_sym__mod_tags_keyword_token1] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token2] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token3] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token4] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token5] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token6] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token7] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token8] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token9] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token10] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token11] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token12] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token13] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token14] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token15] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token16] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token17] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token18] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token19] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token20] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token21] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token22] = aux_sym__mod_tags_keyword_token1,
  [anon_sym_dependencies] = anon_sym_spriteTypes,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile_token1] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile_token2] = sym_string,
  [anon_sym_noOfFrames] = anon_sym_spriteTypes,
  [anon_sym_overlay_frames_per_row] = anon_sym_spriteTypes,
  [anon_sym_overlay_rows] = anon_sym_spriteTypes,
  [anon_sym_effectFile] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_effectFile_token1] = sym_string,
  [anon_sym_animation] = anon_sym_spriteTypes,
  [anon_sym_animationmaskfile] = anon_sym_spriteTypes,
  [anon_sym_animationtexturefile] = anon_sym_spriteTypes,
  [aux_sym__animation_entry_dds_token1] = sym_string,
  [anon_sym_animationrotation] = anon_sym_spriteTypes,
  [anon_sym_animationlooping] = anon_sym_spriteTypes,
  [anon_sym_animationtime] = anon_sym_spriteTypes,
  [anon_sym_animationdelay] = anon_sym_spriteTypes,
  [anon_sym_animationrotationoffset] = anon_sym_spriteTypes,
  [anon_sym_animationtexturescale] = anon_sym_spriteTypes,
  [anon_sym_animationblendmode] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEadd_DQUOTE] = sym_string,
  [anon_sym_DQUOTEmultiply_DQUOTE] = sym_string,
  [anon_sym_DQUOTEoverlay_DQUOTE] = sym_string,
  [anon_sym_animationtype] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEscrolling_DQUOTE] = sym_string,
  [anon_sym_DQUOTErotating_DQUOTE] = sym_string,
  [anon_sym_DQUOTEpulsing_DQUOTE] = sym_string,
  [anon_sym_animationframes] = anon_sym_spriteTypes,
  [anon_sym_size] = anon_sym_spriteTypes,
  [anon_sym_borderSize] = anon_sym_spriteTypes,
  [anon_sym_allwaystransparent] = anon_sym_spriteTypes,
  [anon_sym_legacy_lazy_load] = anon_sym_spriteTypes,
  [anon_sym_clicksound] = anon_sym_spriteTypes,
  [anon_sym_click] = anon_sym_click,
  [anon_sym_speed] = anon_sym_spriteTypes,
  [anon_sym_textblock] = anon_sym_spriteTypes,
  [anon_sym_text] = anon_sym_spriteTypes,
  [anon_sym_color] = anon_sym_spriteTypes,
  [anon_sym_font] = anon_sym_spriteTypes,
  [anon_sym_position] = anon_sym_spriteTypes,
  [anon_sym_format] = anon_sym_spriteTypes,
  [anon_sym_centre] = anon_sym_click,
  [anon_sym_cull_distance] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_cull_distance_token1] = sym_float,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [aux_sym__number_precision_1_token1] = sym_number,
  [aux_sym__number_precision_2_token1] = sym_number,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [sym_integer] = sym_integer,
  [aux_sym__integer_positive_token1] = sym_integer,
  [sym_byte] = sym_byte,
  [sym_angle] = sym_angle,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_yes,
  [sym_comment] = sym_comment,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym__spriteTypes] = sym__spriteTypes,
  [sym__spriteTypes_block] = sym__spriteTypes_block,
  [sym__spriteTypes_statement] = sym__spriteTypes_statement,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__objectTypes] = sym__spriteTypes,
  [sym__objectTypes_block] = sym__objectTypes_block,
  [sym__objectTypes_type] = sym__objectTypes_type,
  [sym__spriteType] = sym__spriteType,
  [sym__spriteType_block] = sym__spriteType_block,
  [sym__textSpriteType] = sym__spriteType,
  [sym__textSpriteType_block] = sym__textSpriteType_block,
  [sym__corneredTileSpriteType] = sym__spriteType,
  [sym__corneredTileSpriteType_block] = sym__corneredTileSpriteType_block,
  [sym__maskedShieldType] = sym__spriteType,
  [sym__maskedShieldType_block] = sym__maskedShieldType_block,
  [sym__animatedmaptext] = sym__spriteType,
  [sym__animatedmaptext_block] = sym__animatedmaptext_block,
  [sym__statement_name] = sym__statement_name,
  [sym__statement_xy_integer] = sym__statement_xy_integer,
  [sym__entry_x_integer] = sym__entry_x_integer,
  [sym__entry_y_integer] = sym__entry_y_integer,
  [sym__statement_xy_float] = sym__statement_xy_float,
  [sym__entry_x_float] = sym__entry_x_float,
  [sym__entry_y_float] = sym__entry_y_float,
  [sym__statement_gfx_name] = sym__statement_gfx_name,
  [sym__statement_mod_path] = sym__statement_mod_path,
  [sym__statement_mod_archive] = sym__statement_mod_archive,
  [sym__statement_mod_remote_file_id] = sym__statement_mod_remote_file_id,
  [sym__statement_mod_version] = sym__statement_mod_version,
  [sym__statement_mod_picture] = sym__statement_mod_picture,
  [sym__statement_mod_supported_version] = sym__statement_mod_supported_version,
  [sym__statement_mod_replace_path] = sym__statement_mod_replace_path,
  [sym__mod_replace_path_folder] = sym__mod_replace_path_folder,
  [sym__statement_mod_tags] = sym__statement_mod_tags,
  [sym__mod_tags_block] = sym__mod_tags_block,
  [sym__mod_tags_keyword] = sym__mod_tags_keyword,
  [sym__statement_mod_dependencies] = sym__statement_mod_dependencies,
  [sym__mod_dependencies_block] = sym__mod_dependencies_block,
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_name,
  [sym__statement_gfx_textureFile] = sym__statement_gfx_name,
  [sym__statement_gfx_noOfFrames] = sym__statement_gfx_name,
  [sym__statement_gfx_overlay_frames_per_row] = sym__statement_gfx_name,
  [sym__statement_gfx_overlay_rows] = sym__statement_gfx_name,
  [sym__statement_gfx_effectFile] = sym__statement_gfx_name,
  [sym__statement_gfx_animation] = sym__statement_gfx_name,
  [sym__gfx_animation_block] = sym__gfx_animation_block,
  [sym__animation_entry_dds] = sym__animation_entry_dds,
  [sym__animation_entry_angle] = sym__animation_entry_angle,
  [sym__animation_entry_bool] = sym__animation_entry_bool,
  [sym__animation_entry_time] = sym__animation_entry_time,
  [sym__animation_entry_xy_float] = sym__animation_entry_xy_float,
  [sym__animation_entry_blendmode] = sym__animation_entry_blendmode,
  [sym__animation_entry_type] = sym__animation_entry_type,
  [sym__animation_entry_frames] = sym__animation_entry_frames,
  [sym__statement_gfx_size] = sym__statement_gfx_size,
  [sym__statement_gfx_borderSize] = sym__statement_gfx_name,
  [sym__statement_gfx_allwaystransparent] = sym__statement_gfx_name,
  [sym__statement_gfx_legacy_lazy_load] = sym__statement_gfx_name,
  [sym__statement_gfx_clicksound] = sym__statement_gfx_name,
  [sym__statement_gfx_speed] = sym__statement_gfx_name,
  [sym__statement_gfx_textblock] = sym__statement_gfx_name,
  [sym__gfx_textblock] = sym__gfx_textblock,
  [sym__statement_gfx_text] = sym__statement_gfx_text,
  [sym__statement_gfx_color] = sym__statement_gfx_color,
  [sym__statement_gfx_font] = sym__statement_gfx_font,
  [sym__statement_gfx_position] = sym__statement_gfx_position,
  [sym__statement_gfx_format] = sym__statement_gfx_format,
  [sym__statement_gfx_cull_distance] = sym__statement_gfx_cull_distance,
  [sym_float] = sym_float,
  [sym__float_positive] = sym__float_positive,
  [sym__integer_positive] = sym__integer_positive,
  [sym__yes_no] = sym__yes_no,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__objectTypes_block_repeat1] = aux_sym__objectTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__textSpriteType_block_repeat1] = aux_sym__textSpriteType_block_repeat1,
  [aux_sym__corneredTileSpriteType_block_repeat1] = aux_sym__corneredTileSpriteType_block_repeat1,
  [aux_sym__maskedShieldType_block_repeat1] = aux_sym__maskedShieldType_block_repeat1,
  [aux_sym__animatedmaptext_block_repeat1] = aux_sym__animatedmaptext_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym__gfx_animation_block_repeat1] = aux_sym__gfx_animation_block_repeat1,
  [aux_sym__animation_entry_frames_repeat1] = aux_sym__animation_entry_frames_repeat1,
  [aux_sym__gfx_textblock_repeat1] = aux_sym__gfx_textblock_repeat1,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_name_value] = alias_sym_name_value,
  [alias_sym_statement] = alias_sym_statement,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_objectTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_spriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textSpriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_corneredTileSpriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maskedShieldType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animatedmaptext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_name_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_archive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_archive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_remote_file_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_remote_file_id_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_picture_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_supported_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_supported_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_replace_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_replace_path_folder_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token15] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token17] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token18] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token19] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token20] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token21] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token22] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_noOfFrames] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_overlay_frames_per_row] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_overlay_rows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_effectFile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_effectFile_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationmaskfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtexturefile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__animation_entry_dds_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationrotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationlooping] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtime] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationdelay] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationrotationoffset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtexturescale] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationblendmode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEadd_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEmultiply_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEoverlay_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEscrolling_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTErotating_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEpulsing_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationframes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_borderSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_legacy_lazy_load] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clicksound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_click] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_speed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_centre] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cull_distance] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_cull_distance_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__number_precision_1_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__number_precision_2_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__integer_positive_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_gfx] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__objectTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__objectTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__objectTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__textSpriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__textSpriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__corneredTileSpriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__corneredTileSpriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__maskedShieldType] = {
    .visible = true,
    .named = true,
  },
  [sym__maskedShieldType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__animatedmaptext] = {
    .visible = true,
    .named = true,
  },
  [sym__animatedmaptext_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_name] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_xy_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_xy_float] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x_float] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y_float] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_name] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_mod_path] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_archive] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_remote_file_id] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_supported_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_replace_path] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_replace_path_folder] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_tags] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_block] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_dependencies] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_dependencies_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textureFile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_noOfFrames] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_overlay_frames_per_row] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_overlay_rows] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_effectFile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_animation] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx_animation_block] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_dds] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_angle] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_bool] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_time] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_xy_float] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_blendmode] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_type] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_frames] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_size] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_borderSize] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_allwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_legacy_lazy_load] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_clicksound] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_speed] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx_textblock] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_text] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_color] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_font] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_position] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_format] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_cull_distance] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym__float_positive] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_positive] = {
    .visible = false,
    .named = true,
  },
  [sym__yes_no] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__objectTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__textSpriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__corneredTileSpriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maskedShieldType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__animatedmaptext_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_tags_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_dependencies_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__gfx_animation_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__animation_entry_frames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__gfx_textblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_statement] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_name_value,
  },
  [2] = {
    [0] = alias_sym_dependencies,
  },
  [3] = {
    [0] = alias_sym_statement,
  },
  [4] = {
    [0] = sym_float,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1137);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(1245);
      if (lookahead == '1') ADVANCE(1245);
      if (lookahead == '2') ADVANCE(1242);
      if (lookahead == '3') ADVANCE(1243);
      if (lookahead == '=') ADVANCE(1237);
      if (lookahead == '\\') SKIP(1133)
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'c') ADVANCE(735);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 's') ADVANCE(833);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == 'v') ADVANCE(763);
      if (lookahead == 'x') ADVANCE(1149);
      if (lookahead == 'y') ADVANCE(1151);
      if (lookahead == '{') ADVANCE(1139);
      if (lookahead == '}') ADVANCE(1140);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(393)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(393)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(394)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(394)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(395)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(395)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(396)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(396)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(622);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(623);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(617);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == 'G') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(162);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(95);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'X') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '_') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'x') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'F') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'X') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1152);
      if (lookahead == 'G') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'I') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'K') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'j') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 'z') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1210);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1161);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1161);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1161);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1155);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1155);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1155);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'j') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == 'z') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1192);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1192);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1197);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1197);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1163);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1216);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1216);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1211);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1211);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1215);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1215);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1214);
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1214);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1181);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1181);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1176);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1176);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1180);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1180);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1167);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1167);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1188);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1188);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1179);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1179);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1157);
      if (lookahead == '.') ADVANCE(499);
      if (lookahead == 'A') ADVANCE(500);
      if (lookahead == 'M') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(539);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 'p') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(472);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1157);
      if (lookahead == '.') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1177);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1202);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1183);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1171);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1174);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1185);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1169);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1168);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1178);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1182);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1172);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1173);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1170);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1187);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1186);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1184);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '=') ADVANCE(1237);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(908);
      if (lookahead == 'f') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == 'p') ADVANCE(948);
      if (lookahead == 's') ADVANCE(832);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead == 'y') ADVANCE(768);
      if (lookahead == '}') ADVANCE(1140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1252);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '=') ADVANCE(1237);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'c') ADVANCE(906);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(1091);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == 't') ADVANCE(803);
      if (lookahead == '{') ADVANCE(1139);
      if (lookahead == '}') ADVANCE(1140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(394)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '-') ADVANCE(1128);
      if (lookahead == '=') ADVANCE(1237);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == 'f') ADVANCE(946);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == 'p') ADVANCE(948);
      if (lookahead == 's') ADVANCE(832);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead == '}') ADVANCE(1140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(395)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1251);
      END_STATE();
    case 396:
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '0') ADVANCE(633);
      if (lookahead == '3') ADVANCE(635);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(637);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(396)
      END_STATE();
    case 397:
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'j') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 398:
      if (lookahead == '*') ADVANCE(347);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'j') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 399:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 400:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 401:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'I') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 402:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'K') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 403:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 404:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 405:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 406:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 407:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 408:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 409:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 410:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 411:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 412:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 413:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 414:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 415:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 416:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 417:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 418:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 419:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 420:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 421:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 422:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 423:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 424:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 425:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 426:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 427:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 428:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 429:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 430:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 431:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 432:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'j') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 433:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'j') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'j') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(448);
      if (lookahead == 'x') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 't') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'g') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(630);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(639);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(1127);
      if (lookahead == 'f') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(1129);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(1129);
      if (lookahead == '0') ADVANCE(631);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(1129);
      if (lookahead == '6') ADVANCE(634);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '0') ADVANCE(1247);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1247);
      END_STATE();
    case 639:
      if (lookahead == '0') ADVANCE(1253);
      END_STATE();
    case 640:
      if (lookahead == 'F') ADVANCE(841);
      END_STATE();
    case 641:
      if (lookahead == 'F') ADVANCE(1003);
      END_STATE();
    case 642:
      if (lookahead == 'O') ADVANCE(812);
      END_STATE();
    case 643:
      if (lookahead == 'S') ADVANCE(980);
      if (lookahead == 'u') ADVANCE(1011);
      END_STATE();
    case 644:
      if (lookahead == 'S') ADVANCE(850);
      END_STATE();
    case 645:
      if (lookahead == 'S') ADVANCE(831);
      END_STATE();
    case 646:
      if (lookahead == 'S') ADVANCE(994);
      END_STATE();
    case 647:
      if (lookahead == 'T') ADVANCE(1111);
      END_STATE();
    case 648:
      if (lookahead == 'T') ADVANCE(858);
      END_STATE();
    case 649:
      if (lookahead == 'T') ADVANCE(1113);
      END_STATE();
    case 650:
      if (lookahead == 'T') ADVANCE(1114);
      END_STATE();
    case 651:
      if (lookahead == 'T') ADVANCE(1115);
      END_STATE();
    case 652:
      if (lookahead == 'T') ADVANCE(1116);
      END_STATE();
    case 653:
      if (lookahead == 'T') ADVANCE(1117);
      END_STATE();
    case 654:
      if (lookahead == 'T') ADVANCE(1118);
      END_STATE();
    case 655:
      if (lookahead == '_') ADVANCE(822);
      END_STATE();
    case 656:
      if (lookahead == '_') ADVANCE(728);
      END_STATE();
    case 657:
      if (lookahead == '_') ADVANCE(818);
      END_STATE();
    case 658:
      if (lookahead == '_') ADVANCE(979);
      END_STATE();
    case 659:
      if (lookahead == '_') ADVANCE(972);
      END_STATE();
    case 660:
      if (lookahead == '_') ADVANCE(890);
      END_STATE();
    case 661:
      if (lookahead == '_') ADVANCE(846);
      END_STATE();
    case 662:
      if (lookahead == '_') ADVANCE(892);
      END_STATE();
    case 663:
      if (lookahead == '_') ADVANCE(1007);
      END_STATE();
    case 664:
      if (lookahead == '_') ADVANCE(1093);
      END_STATE();
    case 665:
      if (lookahead == '_') ADVANCE(987);
      END_STATE();
    case 666:
      if (lookahead == 'a') ADVANCE(1022);
      END_STATE();
    case 667:
      if (lookahead == 'a') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(1258);
      END_STATE();
    case 668:
      if (lookahead == 'a') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 669:
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 670:
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(1032);
      END_STATE();
    case 671:
      if (lookahead == 'a') ADVANCE(1110);
      END_STATE();
    case 672:
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(933);
      END_STATE();
    case 673:
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(1099);
      if (lookahead == 'r') ADVANCE(1088);
      END_STATE();
    case 674:
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 675:
      if (lookahead == 'a') ADVANCE(1121);
      END_STATE();
    case 676:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 677:
      if (lookahead == 'a') ADVANCE(1106);
      END_STATE();
    case 678:
      if (lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 679:
      if (lookahead == 'a') ADVANCE(993);
      END_STATE();
    case 680:
      if (lookahead == 'a') ADVANCE(976);
      if (lookahead == 'i') ADVANCE(1047);
      END_STATE();
    case 681:
      if (lookahead == 'a') ADVANCE(1051);
      END_STATE();
    case 682:
      if (lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 683:
      if (lookahead == 'a') ADVANCE(943);
      END_STATE();
    case 684:
      if (lookahead == 'a') ADVANCE(1052);
      END_STATE();
    case 685:
      if (lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 686:
      if (lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(1034);
      END_STATE();
    case 688:
      if (lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 689:
      if (lookahead == 'a') ADVANCE(1065);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(1109);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 692:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 693:
      if (lookahead == 'a') ADVANCE(917);
      END_STATE();
    case 694:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 695:
      if (lookahead == 'a') ADVANCE(901);
      END_STATE();
    case 696:
      if (lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 697:
      if (lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 698:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 699:
      if (lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 700:
      if (lookahead == 'b') ADVANCE(872);
      END_STATE();
    case 701:
      if (lookahead == 'b') ADVANCE(872);
      if (lookahead == 'v') ADVANCE(766);
      END_STATE();
    case 702:
      if (lookahead == 'b') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(1011);
      END_STATE();
    case 703:
      if (lookahead == 'b') ADVANCE(897);
      if (lookahead == 'd') ADVANCE(783);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'l') ADVANCE(961);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 704:
      if (lookahead == 'c') ADVANCE(830);
      END_STATE();
    case 705:
      if (lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 706:
      if (lookahead == 'c') ADVANCE(1108);
      END_STATE();
    case 707:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 708:
      if (lookahead == 'c') ADVANCE(1062);
      END_STATE();
    case 709:
      if (lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 710:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 711:
      if (lookahead == 'c') ADVANCE(1064);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(1053);
      END_STATE();
    case 713:
      if (lookahead == 'c') ADVANCE(866);
      END_STATE();
    case 714:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 715:
      if (lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 716:
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == 'd') ADVANCE(797);
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead == 'g') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(944);
      if (lookahead == 'l') ADVANCE(973);
      if (lookahead == 'm') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 717:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 718:
      if (lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 719:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 720:
      if (lookahead == 'c') ADVANCE(849);
      END_STATE();
    case 721:
      if (lookahead == 'd') ADVANCE(1225);
      END_STATE();
    case 722:
      if (lookahead == 'd') ADVANCE(1222);
      END_STATE();
    case 723:
      if (lookahead == 'd') ADVANCE(1156);
      END_STATE();
    case 724:
      if (lookahead == 'd') ADVANCE(1221);
      END_STATE();
    case 725:
      if (lookahead == 'd') ADVANCE(645);
      END_STATE();
    case 726:
      if (lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 727:
      if (lookahead == 'd') ADVANCE(914);
      END_STATE();
    case 728:
      if (lookahead == 'd') ADVANCE(843);
      END_STATE();
    case 729:
      if (lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 730:
      if (lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 731:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 733:
      if (lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 734:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'o') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(886);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(1254);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(1255);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(1146);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(1209);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(1213);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(1142);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'i') ADVANCE(958);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(1009);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == 'i') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(990);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(1015);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 811:
      if (lookahead == 'f') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      END_STATE();
    case 812:
      if (lookahead == 'f') ADVANCE(641);
      END_STATE();
    case 813:
      if (lookahead == 'f') ADVANCE(816);
      END_STATE();
    case 814:
      if (lookahead == 'f') ADVANCE(1098);
      END_STATE();
    case 815:
      if (lookahead == 'f') ADVANCE(817);
      END_STATE();
    case 816:
      if (lookahead == 'f') ADVANCE(795);
      END_STATE();
    case 817:
      if (lookahead == 'f') ADVANCE(1040);
      END_STATE();
    case 818:
      if (lookahead == 'f') ADVANCE(853);
      END_STATE();
    case 819:
      if (lookahead == 'f') ADVANCE(692);
      END_STATE();
    case 820:
      if (lookahead == 'f') ADVANCE(1041);
      END_STATE();
    case 821:
      if (lookahead == 'f') ADVANCE(820);
      END_STATE();
    case 822:
      if (lookahead == 'f') ADVANCE(1017);
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 823:
      if (lookahead == 'f') ADVANCE(860);
      END_STATE();
    case 824:
      if (lookahead == 'f') ADVANCE(862);
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 825:
      if (lookahead == 'g') ADVANCE(1204);
      END_STATE();
    case 826:
      if (lookahead == 'g') ADVANCE(676);
      END_STATE();
    case 827:
      if (lookahead == 'g') ADVANCE(1024);
      END_STATE();
    case 828:
      if (lookahead == 'h') ADVANCE(1153);
      END_STATE();
    case 829:
      if (lookahead == 'h') ADVANCE(1164);
      END_STATE();
    case 830:
      if (lookahead == 'h') ADVANCE(836);
      END_STATE();
    case 831:
      if (lookahead == 'h') ADVANCE(848);
      END_STATE();
    case 832:
      if (lookahead == 'i') ADVANCE(1119);
      END_STATE();
    case 833:
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == 'p') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(977);
      END_STATE();
    case 834:
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == 'p') ADVANCE(782);
      if (lookahead == 'u') ADVANCE(977);
      END_STATE();
    case 835:
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 836:
      if (lookahead == 'i') ADVANCE(1092);
      END_STATE();
    case 837:
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 838:
      if (lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 839:
      if (lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 840:
      if (lookahead == 'i') ADVANCE(1074);
      END_STATE();
    case 841:
      if (lookahead == 'i') ADVANCE(894);
      END_STATE();
    case 842:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 843:
      if (lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 844:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 845:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 846:
      if (lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 847:
      if (lookahead == 'i') ADVANCE(1048);
      END_STATE();
    case 848:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 849:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 850:
      if (lookahead == 'i') ADVANCE(1120);
      END_STATE();
    case 851:
      if (lookahead == 'i') ADVANCE(956);
      END_STATE();
    case 852:
      if (lookahead == 'i') ADVANCE(1069);
      END_STATE();
    case 853:
      if (lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 854:
      if (lookahead == 'i') ADVANCE(1039);
      END_STATE();
    case 855:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 856:
      if (lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 857:
      if (lookahead == 'i') ADVANCE(966);
      END_STATE();
    case 858:
      if (lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 859:
      if (lookahead == 'i') ADVANCE(968);
      END_STATE();
    case 860:
      if (lookahead == 'i') ADVANCE(899);
      END_STATE();
    case 861:
      if (lookahead == 'i') ADVANCE(969);
      END_STATE();
    case 862:
      if (lookahead == 'i') ADVANCE(900);
      END_STATE();
    case 863:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 864:
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 865:
      if (lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 866:
      if (lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 867:
      if (lookahead == 'i') ADVANCE(1083);
      END_STATE();
    case 868:
      if (lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 869:
      if (lookahead == 'i') ADVANCE(1084);
      END_STATE();
    case 870:
      if (lookahead == 'i') ADVANCE(1085);
      END_STATE();
    case 871:
      if (lookahead == 'i') ADVANCE(1086);
      END_STATE();
    case 872:
      if (lookahead == 'j') ADVANCE(799);
      END_STATE();
    case 873:
      if (lookahead == 'k') ADVANCE(1224);
      END_STATE();
    case 874:
      if (lookahead == 'k') ADVANCE(1226);
      END_STATE();
    case 875:
      if (lookahead == 'k') ADVANCE(1223);
      END_STATE();
    case 876:
      if (lookahead == 'k') ADVANCE(770);
      END_STATE();
    case 877:
      if (lookahead == 'k') ADVANCE(1033);
      END_STATE();
    case 878:
      if (lookahead == 'k') ADVANCE(823);
      END_STATE();
    case 879:
      if (lookahead == 'l') ADVANCE(883);
      END_STATE();
    case 880:
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 881:
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == 'n') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 882:
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 883:
      if (lookahead == 'l') ADVANCE(1096);
      END_STATE();
    case 884:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 885:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 886:
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(1044);
      END_STATE();
    case 887:
      if (lookahead == 'l') ADVANCE(955);
      END_STATE();
    case 888:
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 889:
      if (lookahead == 'l') ADVANCE(1038);
      END_STATE();
    case 890:
      if (lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 891:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 892:
      if (lookahead == 'l') ADVANCE(964);
      END_STATE();
    case 893:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 894:
      if (lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 895:
      if (lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 896:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 897:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 898:
      if (lookahead == 'l') ADVANCE(769);
      END_STATE();
    case 899:
      if (lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 900:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 901:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 902:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 903:
      if (lookahead == 'l') ADVANCE(954);
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 904:
      if (lookahead == 'l') ADVANCE(678);
      END_STATE();
    case 905:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 906:
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(998);
      if (lookahead == 'u') ADVANCE(1000);
      END_STATE();
    case 907:
      if (lookahead == 'l') ADVANCE(847);
      END_STATE();
    case 908:
      if (lookahead == 'l') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'u') ADVANCE(885);
      END_STATE();
    case 909:
      if (lookahead == 'm') ADVANCE(960);
      if (lookahead == 'p') ADVANCE(904);
      END_STATE();
    case 910:
      if (lookahead == 'm') ADVANCE(681);
      END_STATE();
    case 911:
      if (lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 912:
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 913:
      if (lookahead == 'm') ADVANCE(679);
      END_STATE();
    case 914:
      if (lookahead == 'm') ADVANCE(975);
      END_STATE();
    case 915:
      if (lookahead == 'm') ADVANCE(780);
      END_STATE();
    case 916:
      if (lookahead == 'm') ADVANCE(787);
      END_STATE();
    case 917:
      if (lookahead == 'm') ADVANCE(790);
      END_STATE();
    case 918:
      if (lookahead == 'm') ADVANCE(757);
      END_STATE();
    case 919:
      if (lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 920:
      if (lookahead == 'm') ADVANCE(969);
      END_STATE();
    case 921:
      if (lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 922:
      if (lookahead == 'm') ADVANCE(698);
      END_STATE();
    case 923:
      if (lookahead == 'n') ADVANCE(1158);
      END_STATE();
    case 924:
      if (lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 925:
      if (lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 926:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 927:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 928:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 929:
      if (lookahead == 'n') ADVANCE(1198);
      END_STATE();
    case 930:
      if (lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 931:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 932:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 933:
      if (lookahead == 'n') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 934:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 935:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 936:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 937:
      if (lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 939:
      if (lookahead == 'n') ADVANCE(1056);
      END_STATE();
    case 940:
      if (lookahead == 'n') ADVANCE(1031);
      END_STATE();
    case 941:
      if (lookahead == 'n') ADVANCE(1070);
      END_STATE();
    case 942:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 943:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(995);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(933);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(1257);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(1032);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(1097);
      END_STATE();
    case 950:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 951:
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(923);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(911);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(924);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(999);
      END_STATE();
    case 958:
      if (lookahead == 'o') ADVANCE(925);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 960:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 961:
      if (lookahead == 'o') ADVANCE(959);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1016);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(926);
      END_STATE();
    case 964:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'u') ADVANCE(885);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 967:
      if (lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 968:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 970:
      if (lookahead == 'o') ADVANCE(1002);
      END_STATE();
    case 971:
      if (lookahead == 'o') ADVANCE(929);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(815);
      END_STATE();
    case 973:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 976:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 977:
      if (lookahead == 'p') ADVANCE(992);
      END_STATE();
    case 978:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 979:
      if (lookahead == 'p') ADVANCE(689);
      END_STATE();
    case 980:
      if (lookahead == 'p') ADVANCE(1019);
      END_STATE();
    case 981:
      if (lookahead == 'p') ADVANCE(845);
      END_STATE();
    case 982:
      if (lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 983:
      if (lookahead == 'p') ADVANCE(784);
      END_STATE();
    case 984:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 985:
      if (lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 986:
      if (lookahead == 'p') ADVANCE(753);
      END_STATE();
    case 987:
      if (lookahead == 'p') ADVANCE(785);
      END_STATE();
    case 988:
      if (lookahead == 'p') ADVANCE(756);
      END_STATE();
    case 989:
      if (lookahead == 'p') ADVANCE(791);
      END_STATE();
    case 990:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 991:
      if (lookahead == 'p') ADVANCE(762);
      END_STATE();
    case 992:
      if (lookahead == 'p') ADVANCE(962);
      END_STATE();
    case 993:
      if (lookahead == 'p') ADVANCE(1072);
      END_STATE();
    case 994:
      if (lookahead == 'p') ADVANCE(1020);
      END_STATE();
    case 995:
      if (lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 996:
      if (lookahead == 'r') ADVANCE(1230);
      END_STATE();
    case 997:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 998:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 999:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 1000:
      if (lookahead == 'r') ADVANCE(1044);
      END_STATE();
    case 1001:
      if (lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 1002:
      if (lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 1003:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 1004:
      if (lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 1005:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 1006:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 1007:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 1008:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 1009:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 1010:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 1011:
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 1012:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 1013:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 1014:
      if (lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 1015:
      if (lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 1016:
      if (lookahead == 'r') ADVANCE(1071);
      END_STATE();
    case 1017:
      if (lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 1018:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 1019:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 1020:
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 1021:
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 1022:
      if (lookahead == 's') ADVANCE(876);
      END_STATE();
    case 1023:
      if (lookahead == 's') ADVANCE(1256);
      END_STATE();
    case 1024:
      if (lookahead == 's') ADVANCE(1166);
      END_STATE();
    case 1025:
      if (lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 1026:
      if (lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 1027:
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1028:
      if (lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 1029:
      if (lookahead == 's') ADVANCE(1195);
      END_STATE();
    case 1030:
      if (lookahead == 's') ADVANCE(1217);
      END_STATE();
    case 1031:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 1032:
      if (lookahead == 's') ADVANCE(840);
      END_STATE();
    case 1033:
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 1034:
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 1035:
      if (lookahead == 's') ADVANCE(838);
      END_STATE();
    case 1036:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 1037:
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 1038:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 1039:
      if (lookahead == 's') ADVANCE(1078);
      END_STATE();
    case 1040:
      if (lookahead == 's') ADVANCE(788);
      END_STATE();
    case 1041:
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 1042:
      if (lookahead == 's') ADVANCE(1067);
      END_STATE();
    case 1043:
      if (lookahead == 's') ADVANCE(982);
      END_STATE();
    case 1044:
      if (lookahead == 's') ADVANCE(957);
      END_STATE();
    case 1045:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 1046:
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 1047:
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 1048:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 1049:
      if (lookahead == 't') ADVANCE(1231);
      END_STATE();
    case 1050:
      if (lookahead == 't') ADVANCE(1228);
      END_STATE();
    case 1051:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 1052:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1053:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 1054:
      if (lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 1055:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1056:
      if (lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 1057:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1058:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 1059:
      if (lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 1060:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 1061:
      if (lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 1062:
      if (lookahead == 't') ADVANCE(1089);
      END_STATE();
    case 1063:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 1064:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 1065:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 1066:
      if (lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 1067:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 1068:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 1069:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 1070:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 1071:
      if (lookahead == 't') ADVANCE(777);
      END_STATE();
    case 1072:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 1073:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 1074:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 1075:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 1076:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 1077:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 1078:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1079:
      if (lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 1080:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 1081:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 1082:
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 1083:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 1084:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 1085:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 1086:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 1087:
      if (lookahead == 'u') ADVANCE(935);
      END_STATE();
    case 1088:
      if (lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 1089:
      if (lookahead == 'u') ADVANCE(1010);
      END_STATE();
    case 1090:
      if (lookahead == 'u') ADVANCE(1013);
      END_STATE();
    case 1091:
      if (lookahead == 'v') ADVANCE(766);
      END_STATE();
    case 1092:
      if (lookahead == 'v') ADVANCE(744);
      END_STATE();
    case 1093:
      if (lookahead == 'v') ADVANCE(805);
      END_STATE();
    case 1094:
      if (lookahead == 'v') ADVANCE(800);
      END_STATE();
    case 1095:
      if (lookahead == 'w') ADVANCE(1194);
      END_STATE();
    case 1096:
      if (lookahead == 'w') ADVANCE(671);
      END_STATE();
    case 1097:
      if (lookahead == 'w') ADVANCE(1029);
      END_STATE();
    case 1098:
      if (lookahead == 'x') ADVANCE(339);
      END_STATE();
    case 1099:
      if (lookahead == 'x') ADVANCE(1050);
      END_STATE();
    case 1100:
      if (lookahead == 'x') ADVANCE(1055);
      END_STATE();
    case 1101:
      if (lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 1102:
      if (lookahead == 'x') ADVANCE(1059);
      END_STATE();
    case 1103:
      if (lookahead == 'x') ADVANCE(1060);
      END_STATE();
    case 1104:
      if (lookahead == 'x') ADVANCE(1061);
      END_STATE();
    case 1105:
      if (lookahead == 'x') ADVANCE(1079);
      END_STATE();
    case 1106:
      if (lookahead == 'y') ADVANCE(1206);
      END_STATE();
    case 1107:
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 1108:
      if (lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 1109:
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 1110:
      if (lookahead == 'y') ADVANCE(1042);
      END_STATE();
    case 1111:
      if (lookahead == 'y') ADVANCE(983);
      END_STATE();
    case 1112:
      if (lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 1113:
      if (lookahead == 'y') ADVANCE(984);
      END_STATE();
    case 1114:
      if (lookahead == 'y') ADVANCE(985);
      END_STATE();
    case 1115:
      if (lookahead == 'y') ADVANCE(986);
      END_STATE();
    case 1116:
      if (lookahead == 'y') ADVANCE(988);
      END_STATE();
    case 1117:
      if (lookahead == 'y') ADVANCE(989);
      END_STATE();
    case 1118:
      if (lookahead == 'y') ADVANCE(991);
      END_STATE();
    case 1119:
      if (lookahead == 'z') ADVANCE(740);
      END_STATE();
    case 1120:
      if (lookahead == 'z') ADVANCE(747);
      END_STATE();
    case 1121:
      if (lookahead == 'z') ADVANCE(1112);
      END_STATE();
    case 1122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(855);
      END_STATE();
    case 1123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1247);
      END_STATE();
    case 1124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 1125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1250);
      END_STATE();
    case 1126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 1127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      END_STATE();
    case 1128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1251);
      END_STATE();
    case 1129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1253);
      END_STATE();
    case 1130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1246);
      END_STATE();
    case 1131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1248);
      END_STATE();
    case 1132:
      if (eof) ADVANCE(1137);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1133:
      if (eof) ADVANCE(1137);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1132)
      END_STATE();
    case 1134:
      if (eof) ADVANCE(1137);
      if (lookahead == '\n') SKIP(1136)
      END_STATE();
    case 1135:
      if (eof) ADVANCE(1137);
      if (lookahead == '\n') SKIP(1136)
      if (lookahead == '\r') SKIP(1134)
      END_STATE();
    case 1136:
      if (eof) ADVANCE(1137);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '#') ADVANCE(1259);
      if (lookahead == '-') ADVANCE(1124);
      if (lookahead == '=') ADVANCE(1237);
      if (lookahead == '\\') SKIP(1135)
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'c') ADVANCE(905);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(700);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(763);
      if (lookahead == 'x') ADVANCE(1149);
      if (lookahead == 'y') ADVANCE(1150);
      if (lookahead == '}') ADVANCE(1140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1136)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1191);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == 'b') ADVANCE(897);
      if (lookahead == 'd') ADVANCE(783);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'l') ADVANCE(961);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(980);
      if (lookahead == 'b') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(1011);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1011);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__statement_gfx_cull_distance_token1);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1123);
      if (lookahead == '0') ADVANCE(1240);
      if (lookahead == 'f') ADVANCE(1236);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1123);
      if (lookahead == '5') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1236);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1245);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1123);
      if (lookahead == '6') ADVANCE(1241);
      if (lookahead == 'f') ADVANCE(1236);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1245);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1123);
      if (lookahead == 'f') ADVANCE(1236);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1245);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1123);
      if (lookahead == 'f') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1245);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1131);
      if (lookahead == 'f') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1246);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1247);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1248);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1249);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1250);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1251);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1252);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(812);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1259);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1136},
  [2] = {.lex_state = 1136},
  [3] = {.lex_state = 1136},
  [4] = {.lex_state = 1136},
  [5] = {.lex_state = 1136},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1136},
  [9] = {.lex_state = 1136},
  [10] = {.lex_state = 1136},
  [11] = {.lex_state = 1136},
  [12] = {.lex_state = 393},
  [13] = {.lex_state = 394},
  [14] = {.lex_state = 1136},
  [15] = {.lex_state = 1136},
  [16] = {.lex_state = 394},
  [17] = {.lex_state = 393},
  [18] = {.lex_state = 394},
  [19] = {.lex_state = 1136},
  [20] = {.lex_state = 393},
  [21] = {.lex_state = 1136},
  [22] = {.lex_state = 395},
  [23] = {.lex_state = 394},
  [24] = {.lex_state = 394},
  [25] = {.lex_state = 395},
  [26] = {.lex_state = 394},
  [27] = {.lex_state = 394},
  [28] = {.lex_state = 394},
  [29] = {.lex_state = 394},
  [30] = {.lex_state = 1136},
  [31] = {.lex_state = 1136},
  [32] = {.lex_state = 1136},
  [33] = {.lex_state = 1136},
  [34] = {.lex_state = 1136},
  [35] = {.lex_state = 1136},
  [36] = {.lex_state = 394},
  [37] = {.lex_state = 1136},
  [38] = {.lex_state = 1136},
  [39] = {.lex_state = 1136},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1136},
  [42] = {.lex_state = 1136},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1136},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1136},
  [51] = {.lex_state = 1136},
  [52] = {.lex_state = 1136},
  [53] = {.lex_state = 1136},
  [54] = {.lex_state = 1136},
  [55] = {.lex_state = 1136},
  [56] = {.lex_state = 1136},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1136},
  [73] = {.lex_state = 1136},
  [74] = {.lex_state = 1136},
  [75] = {.lex_state = 394},
  [76] = {.lex_state = 393},
  [77] = {.lex_state = 393},
  [78] = {.lex_state = 394},
  [79] = {.lex_state = 393},
  [80] = {.lex_state = 393},
  [81] = {.lex_state = 393},
  [82] = {.lex_state = 393},
  [83] = {.lex_state = 1136},
  [84] = {.lex_state = 1136},
  [85] = {.lex_state = 1136},
  [86] = {.lex_state = 394},
  [87] = {.lex_state = 394},
  [88] = {.lex_state = 394},
  [89] = {.lex_state = 394},
  [90] = {.lex_state = 1136},
  [91] = {.lex_state = 394},
  [92] = {.lex_state = 1136},
  [93] = {.lex_state = 1136},
  [94] = {.lex_state = 1136},
  [95] = {.lex_state = 393},
  [96] = {.lex_state = 394},
  [97] = {.lex_state = 394},
  [98] = {.lex_state = 394},
  [99] = {.lex_state = 394},
  [100] = {.lex_state = 393},
  [101] = {.lex_state = 393},
  [102] = {.lex_state = 393},
  [103] = {.lex_state = 393},
  [104] = {.lex_state = 393},
  [105] = {.lex_state = 1136},
  [106] = {.lex_state = 1136},
  [107] = {.lex_state = 394},
  [108] = {.lex_state = 1136},
  [109] = {.lex_state = 1136},
  [110] = {.lex_state = 394},
  [111] = {.lex_state = 394},
  [112] = {.lex_state = 394},
  [113] = {.lex_state = 394},
  [114] = {.lex_state = 1136},
  [115] = {.lex_state = 394},
  [116] = {.lex_state = 394},
  [117] = {.lex_state = 394},
  [118] = {.lex_state = 394},
  [119] = {.lex_state = 1136},
  [120] = {.lex_state = 394},
  [121] = {.lex_state = 394},
  [122] = {.lex_state = 1136},
  [123] = {.lex_state = 1136},
  [124] = {.lex_state = 394},
  [125] = {.lex_state = 394},
  [126] = {.lex_state = 394},
  [127] = {.lex_state = 394},
  [128] = {.lex_state = 1136},
  [129] = {.lex_state = 1136},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1136},
  [132] = {.lex_state = 1136},
  [133] = {.lex_state = 1136},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1136},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 393},
  [138] = {.lex_state = 1136},
  [139] = {.lex_state = 1136},
  [140] = {.lex_state = 1136},
  [141] = {.lex_state = 393},
  [142] = {.lex_state = 1136},
  [143] = {.lex_state = 1136},
  [144] = {.lex_state = 1136},
  [145] = {.lex_state = 393},
  [146] = {.lex_state = 393},
  [147] = {.lex_state = 393},
  [148] = {.lex_state = 1136},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 393},
  [151] = {.lex_state = 393},
  [152] = {.lex_state = 393},
  [153] = {.lex_state = 1136},
  [154] = {.lex_state = 1136},
  [155] = {.lex_state = 1136},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1136},
  [158] = {.lex_state = 1136},
  [159] = {.lex_state = 1136},
  [160] = {.lex_state = 1136},
  [161] = {.lex_state = 1136},
  [162] = {.lex_state = 393},
  [163] = {.lex_state = 1136},
  [164] = {.lex_state = 393},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 394},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1136},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1136},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1136},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1136},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1136},
  [181] = {.lex_state = 1136},
  [182] = {.lex_state = 1136},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1136},
  [187] = {.lex_state = 1136},
  [188] = {.lex_state = 1136},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1136},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 395},
  [193] = {.lex_state = 1136},
  [194] = {.lex_state = 393},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1136},
  [197] = {.lex_state = 393},
  [198] = {.lex_state = 393},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1136},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 394},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1136},
  [207] = {.lex_state = 393},
  [208] = {.lex_state = 393},
  [209] = {.lex_state = 393},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1136},
  [212] = {.lex_state = 393},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1136},
  [217] = {.lex_state = 395},
  [218] = {.lex_state = 395},
  [219] = {.lex_state = 395},
  [220] = {.lex_state = 394},
  [221] = {.lex_state = 393},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 396},
  [229] = {.lex_state = 1136},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 1136},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_objectTypes] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_textSpriteType] = ACTIONS(1),
    [anon_sym_corneredTileSpriteType] = ACTIONS(1),
    [anon_sym_maskedShieldType] = ACTIONS(1),
    [anon_sym_animatedmaptext] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [aux_sym__statement_gfx_name_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_name_token2] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_archive] = ACTIONS(1),
    [aux_sym__statement_mod_archive_token1] = ACTIONS(1),
    [anon_sym_remote_file_id] = ACTIONS(1),
    [aux_sym__statement_mod_remote_file_id_token1] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [aux_sym__statement_mod_version_token1] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [aux_sym__statement_mod_picture_token1] = ACTIONS(1),
    [anon_sym_supported_version] = ACTIONS(1),
    [aux_sym__statement_mod_supported_version_token1] = ACTIONS(1),
    [anon_sym_replace_path] = ACTIONS(1),
    [aux_sym__mod_replace_path_folder_token1] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token1] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token2] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token3] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token4] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token5] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token6] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token7] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token8] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token9] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token10] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token11] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token12] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token13] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token14] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token15] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token16] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token17] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token18] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token19] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token20] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token21] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token22] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile_token2] = ACTIONS(1),
    [anon_sym_noOfFrames] = ACTIONS(1),
    [anon_sym_overlay_frames_per_row] = ACTIONS(1),
    [anon_sym_overlay_rows] = ACTIONS(1),
    [anon_sym_effectFile] = ACTIONS(1),
    [aux_sym__statement_gfx_effectFile_token1] = ACTIONS(1),
    [anon_sym_animation] = ACTIONS(1),
    [anon_sym_animationmaskfile] = ACTIONS(1),
    [aux_sym__animation_entry_dds_token1] = ACTIONS(1),
    [anon_sym_animationrotation] = ACTIONS(1),
    [anon_sym_animationlooping] = ACTIONS(1),
    [anon_sym_animationdelay] = ACTIONS(1),
    [anon_sym_animationrotationoffset] = ACTIONS(1),
    [anon_sym_animationblendmode] = ACTIONS(1),
    [anon_sym_DQUOTEadd_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmultiply_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEoverlay_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEscrolling_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTErotating_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEpulsing_DQUOTE] = ACTIONS(1),
    [anon_sym_animationframes] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_borderSize] = ACTIONS(1),
    [anon_sym_allwaystransparent] = ACTIONS(1),
    [anon_sym_legacy_lazy_load] = ACTIONS(1),
    [anon_sym_clicksound] = ACTIONS(1),
    [anon_sym_click] = ACTIONS(1),
    [anon_sym_speed] = ACTIONS(1),
    [anon_sym_textblock] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_cull_distance] = ACTIONS(1),
    [aux_sym__statement_gfx_cull_distance_token1] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__number_precision_1_token1] = ACTIONS(1),
    [aux_sym__number_precision_2_token1] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym__integer_positive_token1] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_angle] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(233),
    [sym_dot_mod] = STATE(213),
    [sym_dot_gfx] = STATE(213),
    [sym__spriteTypes] = STATE(122),
    [sym__objectTypes] = STATE(122),
    [sym__statement_name] = STATE(6),
    [sym__statement_mod_path] = STATE(6),
    [sym__statement_mod_archive] = STATE(6),
    [sym__statement_mod_remote_file_id] = STATE(6),
    [sym__statement_mod_version] = STATE(6),
    [sym__statement_mod_picture] = STATE(6),
    [sym__statement_mod_supported_version] = STATE(6),
    [sym__statement_mod_replace_path] = STATE(6),
    [sym__statement_mod_tags] = STATE(6),
    [sym__statement_mod_dependencies] = STATE(6),
    [aux_sym_dot_mod_repeat1] = STATE(6),
    [aux_sym_dot_gfx_repeat1] = STATE(122),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_objectTypes] = ACTIONS(7),
    [anon_sym_name] = ACTIONS(9),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_archive] = ACTIONS(13),
    [anon_sym_remote_file_id] = ACTIONS(15),
    [anon_sym_version] = ACTIONS(17),
    [anon_sym_picture] = ACTIONS(19),
    [anon_sym_supported_version] = ACTIONS(21),
    [anon_sym_replace_path] = ACTIONS(23),
    [anon_sym_tags] = ACTIONS(25),
    [anon_sym_dependencies] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(31), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(36), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [70] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(40), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_assign_equal,
    ACTIONS(42), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
  [136] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(11), 1,
      anon_sym_path,
    ACTIONS(13), 1,
      anon_sym_archive,
    ACTIONS(15), 1,
      anon_sym_remote_file_id,
    ACTIONS(17), 1,
      anon_sym_version,
    ACTIONS(19), 1,
      anon_sym_picture,
    ACTIONS(21), 1,
      anon_sym_supported_version,
    ACTIONS(23), 1,
      anon_sym_replace_path,
    ACTIONS(25), 1,
      anon_sym_tags,
    ACTIONS(27), 1,
      anon_sym_dependencies,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(7), 11,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_replace_path,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [186] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_name,
    ACTIONS(53), 1,
      anon_sym_path,
    ACTIONS(56), 1,
      anon_sym_archive,
    ACTIONS(59), 1,
      anon_sym_remote_file_id,
    ACTIONS(62), 1,
      anon_sym_version,
    ACTIONS(65), 1,
      anon_sym_picture,
    ACTIONS(68), 1,
      anon_sym_supported_version,
    ACTIONS(71), 1,
      anon_sym_replace_path,
    ACTIONS(74), 1,
      anon_sym_tags,
    ACTIONS(77), 1,
      anon_sym_dependencies,
    STATE(7), 11,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_replace_path,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
  [264] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_animationrotation,
    ACTIONS(88), 1,
      anon_sym_animationlooping,
    ACTIONS(94), 1,
      anon_sym_animationblendmode,
    ACTIONS(96), 1,
      anon_sym_animationtype,
    ACTIONS(98), 1,
      anon_sym_animationframes,
    ACTIONS(84), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(90), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(92), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(10), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [309] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_animationrotation,
    ACTIONS(108), 1,
      anon_sym_animationlooping,
    ACTIONS(117), 1,
      anon_sym_animationblendmode,
    ACTIONS(120), 1,
      anon_sym_animationtype,
    ACTIONS(123), 1,
      anon_sym_animationframes,
    ACTIONS(102), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(111), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(114), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(10), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [354] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_animationrotation,
    ACTIONS(88), 1,
      anon_sym_animationlooping,
    ACTIONS(94), 1,
      anon_sym_animationblendmode,
    ACTIONS(96), 1,
      anon_sym_animationtype,
    ACTIONS(98), 1,
      anon_sym_animationframes,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(90), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(92), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(9), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [399] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_size,
    ACTIONS(133), 1,
      anon_sym_text,
    ACTIONS(136), 1,
      anon_sym_color,
    ACTIONS(139), 1,
      anon_sym_font,
    ACTIONS(142), 1,
      anon_sym_position,
    ACTIONS(145), 1,
      anon_sym_format,
    ACTIONS(148), 1,
      anon_sym_cull_distance,
    STATE(12), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [437] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(159), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(161), 1,
      anon_sym_overlay_rows,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(165), 1,
      anon_sym_animation,
    STATE(16), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [475] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      anon_sym_name,
    ACTIONS(172), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(175), 1,
      anon_sym_noOfFrames,
    ACTIONS(178), 1,
      anon_sym_size,
    ACTIONS(181), 1,
      anon_sym_borderSize,
    ACTIONS(184), 1,
      anon_sym_allwaystransparent,
    ACTIONS(187), 1,
      anon_sym_legacy_lazy_load,
    STATE(106), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(14), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [515] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_size,
    ACTIONS(194), 1,
      anon_sym_borderSize,
    ACTIONS(196), 1,
      anon_sym_allwaystransparent,
    ACTIONS(198), 1,
      anon_sym_legacy_lazy_load,
    STATE(106), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(14), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [555] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_name,
    ACTIONS(205), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(208), 1,
      anon_sym_noOfFrames,
    ACTIONS(211), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(214), 1,
      anon_sym_overlay_rows,
    ACTIONS(217), 1,
      anon_sym_effectFile,
    ACTIONS(220), 1,
      anon_sym_animation,
    STATE(16), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [593] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_size,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_text,
    ACTIONS(227), 1,
      anon_sym_color,
    ACTIONS(229), 1,
      anon_sym_font,
    ACTIONS(231), 1,
      anon_sym_position,
    ACTIONS(233), 1,
      anon_sym_format,
    ACTIONS(235), 1,
      anon_sym_cull_distance,
    STATE(20), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [631] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(159), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(161), 1,
      anon_sym_overlay_rows,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(165), 1,
      anon_sym_animation,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(13), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_animationrotation,
    ACTIONS(239), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
      anon_sym_speed,
      anon_sym_textblock,
      aux_sym_float_token1,
  [693] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_size,
    ACTIONS(225), 1,
      anon_sym_text,
    ACTIONS(227), 1,
      anon_sym_color,
    ACTIONS(229), 1,
      anon_sym_font,
    ACTIONS(231), 1,
      anon_sym_position,
    ACTIONS(233), 1,
      anon_sym_format,
    ACTIONS(235), 1,
      anon_sym_cull_distance,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(12), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [731] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(192), 1,
      anon_sym_size,
    ACTIONS(194), 1,
      anon_sym_borderSize,
    ACTIONS(196), 1,
      anon_sym_allwaystransparent,
    ACTIONS(198), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(106), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(15), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_text,
    ACTIONS(251), 1,
      sym_assign_equal,
    ACTIONS(247), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [796] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      anon_sym_spriteType,
    ACTIONS(257), 1,
      anon_sym_textSpriteType,
    ACTIONS(259), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(261), 1,
      anon_sym_maskedShieldType,
    ACTIONS(263), 1,
      anon_sym_cursor_offset,
    STATE(28), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_spriteType,
    ACTIONS(257), 1,
      anon_sym_textSpriteType,
    ACTIONS(259), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(261), 1,
      anon_sym_maskedShieldType,
    ACTIONS(263), 1,
      anon_sym_cursor_offset,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(23), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_text,
    ACTIONS(267), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_assign_equal,
    ACTIONS(271), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_assign_equal,
    ACTIONS(275), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [926] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_spriteType,
    ACTIONS(284), 1,
      anon_sym_textSpriteType,
    ACTIONS(287), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(290), 1,
      anon_sym_maskedShieldType,
    ACTIONS(293), 1,
      anon_sym_cursor_offset,
    STATE(28), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_animationrotation,
    ACTIONS(302), 1,
      sym_assign_equal,
    ACTIONS(298), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_animationrotation,
    ACTIONS(308), 1,
      sym_assign_equal,
    ACTIONS(304), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_animationrotation,
    ACTIONS(314), 1,
      sym_assign_equal,
    ACTIONS(310), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_animationrotation,
    ACTIONS(320), 1,
      sym_assign_equal,
    ACTIONS(316), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_animationrotation,
    ACTIONS(326), 1,
      sym_assign_equal,
    ACTIONS(322), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_animationrotation,
    ACTIONS(332), 1,
      sym_assign_equal,
    ACTIONS(328), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [1134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_animationrotation,
    ACTIONS(340), 1,
      sym_assign_equal,
    ACTIONS(336), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_animationrotation,
    ACTIONS(346), 1,
      sym_assign_equal,
    ACTIONS(342), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1180] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      anon_sym_name,
    ACTIONS(353), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(356), 1,
      anon_sym_noOfFrames,
    ACTIONS(359), 1,
      anon_sym_effectFile,
    ACTIONS(362), 1,
      anon_sym_clicksound,
    STATE(123), 1,
      sym__statement_name,
    STATE(39), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_assign_equal,
    ACTIONS(365), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_animationrotation,
    ACTIONS(369), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1252] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      anon_sym_clicksound,
    STATE(123), 1,
      sym__statement_name,
    STATE(39), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_assign_equal,
    ACTIONS(377), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_assign_equal,
    ACTIONS(381), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_assign_equal,
    ACTIONS(385), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_assign_equal,
    ACTIONS(389), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_assign_equal,
    ACTIONS(393), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_animationrotation,
    ACTIONS(397), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_assign_equal,
    ACTIONS(401), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_animationrotation,
    ACTIONS(405), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_animationrotation,
    ACTIONS(409), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_animationrotation,
    ACTIONS(413), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(375), 1,
      anon_sym_clicksound,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym__statement_name,
    STATE(42), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_animationrotation,
    ACTIONS(419), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_animationrotation,
    ACTIONS(423), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_animationrotation,
    ACTIONS(427), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [1576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_assign_equal,
    ACTIONS(431), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_assign_equal,
    ACTIONS(435), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [1837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_name,
    ACTIONS(472), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(475), 1,
      anon_sym_noOfFrames,
    ACTIONS(478), 1,
      anon_sym_effectFile,
    STATE(73), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(157), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(72), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_assign_equal,
    ACTIONS(483), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_assign_equal,
    ACTIONS(487), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_assign_equal,
    ACTIONS(491), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_assign_equal,
    ACTIONS(497), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_assign_equal,
    ACTIONS(501), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_assign_equal,
    ACTIONS(505), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_assign_equal,
    ACTIONS(509), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_assign_equal,
    ACTIONS(513), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_assign_equal,
    ACTIONS(517), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_assign_equal,
    ACTIONS(521), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_assign_equal,
    ACTIONS(525), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_assign_equal,
    ACTIONS(529), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_assign_equal,
    ACTIONS(533), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_assign_equal,
    ACTIONS(537), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_name,
    ACTIONS(546), 1,
      anon_sym_speed,
    ACTIONS(549), 1,
      anon_sym_textblock,
    STATE(144), 1,
      sym__statement_name,
    STATE(90), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(560), 1,
      anon_sym_speed,
    ACTIONS(562), 1,
      anon_sym_textblock,
    STATE(144), 1,
      sym__statement_name,
    STATE(108), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2441] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_name,
    ACTIONS(560), 1,
      anon_sym_speed,
    ACTIONS(562), 1,
      anon_sym_textblock,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym__statement_name,
    STATE(90), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_assign_equal,
    ACTIONS(592), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_spriteTypes,
    ACTIONS(611), 1,
      anon_sym_objectTypes,
    STATE(114), 3,
      sym__spriteTypes,
      sym__objectTypes,
      aux_sym_dot_gfx_repeat1,
  [2549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    STATE(114), 3,
      sym__spriteTypes,
      sym__objectTypes,
      aux_sym_dot_gfx_repeat1,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2711] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_x,
    ACTIONS(642), 1,
      anon_sym_y,
    STATE(173), 1,
      sym__entry_x_integer,
    STATE(174), 1,
      sym__entry_y_integer,
    STATE(239), 1,
      sym__statement_xy_integer,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_assign_equal,
    ACTIONS(644), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    ACTIONS(650), 1,
      anon_sym_animatedmaptext,
    STATE(134), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [2758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_x,
    ACTIONS(642), 1,
      anon_sym_y,
    STATE(173), 1,
      sym__entry_x_integer,
    STATE(174), 1,
      sym__entry_y_integer,
    STATE(230), 1,
      sym__statement_xy_integer,
  [2777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_x,
    ACTIONS(642), 1,
      anon_sym_y,
    STATE(173), 1,
      sym__entry_x_integer,
    STATE(174), 1,
      sym__entry_y_integer,
    STATE(238), 1,
      sym__statement_xy_integer,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_assign_equal,
    ACTIONS(652), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_animatedmaptext,
    STATE(134), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [2824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_x,
    ACTIONS(663), 1,
      anon_sym_y,
    STATE(185), 1,
      sym__entry_y_float,
    STATE(186), 1,
      sym__entry_x_float,
    STATE(225), 1,
      sym__statement_xy_float,
  [2843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_animatedmaptext,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(130), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      aux_sym__integer_positive_token1,
    STATE(137), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 1,
      aux_sym__integer_positive_token1,
    STATE(137), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 4,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
      aux_sym_float_token1,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [2946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym__integer_positive_token1,
    STATE(141), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      sym_string,
    STATE(146), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      sym_string,
    STATE(146), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_assign_equal,
    ACTIONS(699), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [2994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_assign_equal,
    ACTIONS(703), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(92), 1,
      sym__yes_no,
    ACTIONS(707), 2,
      anon_sym_yes,
      anon_sym_no,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym__yes_no,
    ACTIONS(709), 2,
      anon_sym_yes,
      anon_sym_no,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym__yes_no,
    ACTIONS(711), 2,
      anon_sym_yes,
      anon_sym_no,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_assign_equal,
    ACTIONS(715), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_assign_equal,
    ACTIONS(721), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_string,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [3136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 3,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym__integer_positive_token1,
    STATE(29), 1,
      sym__integer_positive,
  [3155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__gfx_animation_block,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym__textSpriteType_block,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__mod_dependencies_block,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__mod_tags_block,
  [3195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(68), 1,
      sym__mod_replace_path_folder,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym__corneredTileSpriteType_block,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_y,
    STATE(215), 1,
      sym__entry_y_integer,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_x,
    STATE(215), 1,
      sym__entry_x_integer,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_float_token1,
    STATE(241), 1,
      sym__float_positive,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym__maskedShieldType_block,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_float_token1,
    STATE(170), 1,
      sym_float,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym__gfx_textblock,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_float_token1,
    STATE(171), 1,
      sym_float,
  [3309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_float_token1,
    STATE(140), 1,
      sym__float_positive,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_float_token1,
    STATE(175), 1,
      sym__float_positive,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym__animatedmaptext_block,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym__spriteType_block,
  [3349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_x,
    STATE(234), 1,
      sym__entry_x_float,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_y,
    STATE(234), 1,
      sym__entry_y_float,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_float_token1,
    STATE(54), 1,
      sym__float_positive,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_float_token1,
    STATE(190), 1,
      sym_float,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_float_token1,
    STATE(231), 1,
      sym_float,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(777), 1,
      aux_sym__statement_gfx_name_token2,
  [3425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_float_token1,
    STATE(182), 1,
      sym__float_positive,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_RBRACE,
      sym_string,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__integer_positive_token1,
    STATE(98), 1,
      sym__integer_positive,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__integer_positive_token1,
    STATE(97), 1,
      sym__integer_positive,
  [3479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym__spriteTypes_block,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym__objectTypes_block,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym__animation_entry_dds_token1,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_centre,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym__statement_gfx_cull_distance_token1,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_assign_equal,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym__statement_mod_archive_token1,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_string,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_string,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_string,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [3576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_string,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
  [3590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_assign_equal,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [3604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_integer,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_integer,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym__statement_mod_version_token1,
  [3639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_click,
  [3646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
  [3653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_LBRACE,
  [3660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
  [3667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
  [3674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
  [3681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_assign_equal,
  [3688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_angle,
  [3695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym__statement_mod_picture_token1,
  [3702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [3709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [3716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym__statement_mod_supported_version_token1,
  [3723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
  [3730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [3737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_assign_equal,
  [3744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_assign_equal,
  [3751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_assign_equal,
  [3758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
  [3772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_assign_equal,
  [3779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
  [3786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 475,
  [SMALL_STATE(15)] = 515,
  [SMALL_STATE(16)] = 555,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 693,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 771,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 828,
  [SMALL_STATE(25)] = 860,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 958,
  [SMALL_STATE(30)] = 977,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1023,
  [SMALL_STATE(33)] = 1046,
  [SMALL_STATE(34)] = 1069,
  [SMALL_STATE(35)] = 1092,
  [SMALL_STATE(36)] = 1115,
  [SMALL_STATE(37)] = 1134,
  [SMALL_STATE(38)] = 1157,
  [SMALL_STATE(39)] = 1180,
  [SMALL_STATE(40)] = 1212,
  [SMALL_STATE(41)] = 1232,
  [SMALL_STATE(42)] = 1252,
  [SMALL_STATE(43)] = 1284,
  [SMALL_STATE(44)] = 1304,
  [SMALL_STATE(45)] = 1324,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1384,
  [SMALL_STATE(49)] = 1404,
  [SMALL_STATE(50)] = 1424,
  [SMALL_STATE(51)] = 1444,
  [SMALL_STATE(52)] = 1464,
  [SMALL_STATE(53)] = 1484,
  [SMALL_STATE(54)] = 1516,
  [SMALL_STATE(55)] = 1536,
  [SMALL_STATE(56)] = 1556,
  [SMALL_STATE(57)] = 1576,
  [SMALL_STATE(58)] = 1596,
  [SMALL_STATE(59)] = 1616,
  [SMALL_STATE(60)] = 1633,
  [SMALL_STATE(61)] = 1650,
  [SMALL_STATE(62)] = 1667,
  [SMALL_STATE(63)] = 1684,
  [SMALL_STATE(64)] = 1701,
  [SMALL_STATE(65)] = 1718,
  [SMALL_STATE(66)] = 1735,
  [SMALL_STATE(67)] = 1752,
  [SMALL_STATE(68)] = 1769,
  [SMALL_STATE(69)] = 1786,
  [SMALL_STATE(70)] = 1803,
  [SMALL_STATE(71)] = 1820,
  [SMALL_STATE(72)] = 1837,
  [SMALL_STATE(73)] = 1863,
  [SMALL_STATE(74)] = 1889,
  [SMALL_STATE(75)] = 1915,
  [SMALL_STATE(76)] = 1933,
  [SMALL_STATE(77)] = 1950,
  [SMALL_STATE(78)] = 1967,
  [SMALL_STATE(79)] = 1982,
  [SMALL_STATE(80)] = 1999,
  [SMALL_STATE(81)] = 2016,
  [SMALL_STATE(82)] = 2033,
  [SMALL_STATE(83)] = 2050,
  [SMALL_STATE(84)] = 2067,
  [SMALL_STATE(85)] = 2084,
  [SMALL_STATE(86)] = 2101,
  [SMALL_STATE(87)] = 2118,
  [SMALL_STATE(88)] = 2135,
  [SMALL_STATE(89)] = 2152,
  [SMALL_STATE(90)] = 2169,
  [SMALL_STATE(91)] = 2193,
  [SMALL_STATE(92)] = 2207,
  [SMALL_STATE(93)] = 2221,
  [SMALL_STATE(94)] = 2235,
  [SMALL_STATE(95)] = 2259,
  [SMALL_STATE(96)] = 2273,
  [SMALL_STATE(97)] = 2287,
  [SMALL_STATE(98)] = 2301,
  [SMALL_STATE(99)] = 2315,
  [SMALL_STATE(100)] = 2329,
  [SMALL_STATE(101)] = 2343,
  [SMALL_STATE(102)] = 2357,
  [SMALL_STATE(103)] = 2371,
  [SMALL_STATE(104)] = 2385,
  [SMALL_STATE(105)] = 2399,
  [SMALL_STATE(106)] = 2413,
  [SMALL_STATE(107)] = 2427,
  [SMALL_STATE(108)] = 2441,
  [SMALL_STATE(109)] = 2465,
  [SMALL_STATE(110)] = 2480,
  [SMALL_STATE(111)] = 2495,
  [SMALL_STATE(112)] = 2507,
  [SMALL_STATE(113)] = 2519,
  [SMALL_STATE(114)] = 2531,
  [SMALL_STATE(115)] = 2549,
  [SMALL_STATE(116)] = 2561,
  [SMALL_STATE(117)] = 2573,
  [SMALL_STATE(118)] = 2585,
  [SMALL_STATE(119)] = 2597,
  [SMALL_STATE(120)] = 2609,
  [SMALL_STATE(121)] = 2621,
  [SMALL_STATE(122)] = 2633,
  [SMALL_STATE(123)] = 2651,
  [SMALL_STATE(124)] = 2663,
  [SMALL_STATE(125)] = 2675,
  [SMALL_STATE(126)] = 2687,
  [SMALL_STATE(127)] = 2699,
  [SMALL_STATE(128)] = 2711,
  [SMALL_STATE(129)] = 2730,
  [SMALL_STATE(130)] = 2743,
  [SMALL_STATE(131)] = 2758,
  [SMALL_STATE(132)] = 2777,
  [SMALL_STATE(133)] = 2796,
  [SMALL_STATE(134)] = 2809,
  [SMALL_STATE(135)] = 2824,
  [SMALL_STATE(136)] = 2843,
  [SMALL_STATE(137)] = 2858,
  [SMALL_STATE(138)] = 2872,
  [SMALL_STATE(139)] = 2882,
  [SMALL_STATE(140)] = 2892,
  [SMALL_STATE(141)] = 2902,
  [SMALL_STATE(142)] = 2916,
  [SMALL_STATE(143)] = 2926,
  [SMALL_STATE(144)] = 2936,
  [SMALL_STATE(145)] = 2946,
  [SMALL_STATE(146)] = 2957,
  [SMALL_STATE(147)] = 2970,
  [SMALL_STATE(148)] = 2983,
  [SMALL_STATE(149)] = 2994,
  [SMALL_STATE(150)] = 3005,
  [SMALL_STATE(151)] = 3016,
  [SMALL_STATE(152)] = 3027,
  [SMALL_STATE(153)] = 3038,
  [SMALL_STATE(154)] = 3047,
  [SMALL_STATE(155)] = 3058,
  [SMALL_STATE(156)] = 3067,
  [SMALL_STATE(157)] = 3078,
  [SMALL_STATE(158)] = 3087,
  [SMALL_STATE(159)] = 3096,
  [SMALL_STATE(160)] = 3105,
  [SMALL_STATE(161)] = 3114,
  [SMALL_STATE(162)] = 3123,
  [SMALL_STATE(163)] = 3136,
  [SMALL_STATE(164)] = 3145,
  [SMALL_STATE(165)] = 3155,
  [SMALL_STATE(166)] = 3165,
  [SMALL_STATE(167)] = 3175,
  [SMALL_STATE(168)] = 3185,
  [SMALL_STATE(169)] = 3195,
  [SMALL_STATE(170)] = 3205,
  [SMALL_STATE(171)] = 3213,
  [SMALL_STATE(172)] = 3221,
  [SMALL_STATE(173)] = 3231,
  [SMALL_STATE(174)] = 3241,
  [SMALL_STATE(175)] = 3251,
  [SMALL_STATE(176)] = 3261,
  [SMALL_STATE(177)] = 3271,
  [SMALL_STATE(178)] = 3281,
  [SMALL_STATE(179)] = 3289,
  [SMALL_STATE(180)] = 3299,
  [SMALL_STATE(181)] = 3309,
  [SMALL_STATE(182)] = 3319,
  [SMALL_STATE(183)] = 3329,
  [SMALL_STATE(184)] = 3339,
  [SMALL_STATE(185)] = 3349,
  [SMALL_STATE(186)] = 3359,
  [SMALL_STATE(187)] = 3369,
  [SMALL_STATE(188)] = 3379,
  [SMALL_STATE(189)] = 3389,
  [SMALL_STATE(190)] = 3397,
  [SMALL_STATE(191)] = 3407,
  [SMALL_STATE(192)] = 3415,
  [SMALL_STATE(193)] = 3425,
  [SMALL_STATE(194)] = 3435,
  [SMALL_STATE(195)] = 3443,
  [SMALL_STATE(196)] = 3451,
  [SMALL_STATE(197)] = 3459,
  [SMALL_STATE(198)] = 3469,
  [SMALL_STATE(199)] = 3479,
  [SMALL_STATE(200)] = 3489,
  [SMALL_STATE(201)] = 3499,
  [SMALL_STATE(202)] = 3506,
  [SMALL_STATE(203)] = 3513,
  [SMALL_STATE(204)] = 3520,
  [SMALL_STATE(205)] = 3527,
  [SMALL_STATE(206)] = 3534,
  [SMALL_STATE(207)] = 3541,
  [SMALL_STATE(208)] = 3548,
  [SMALL_STATE(209)] = 3555,
  [SMALL_STATE(210)] = 3562,
  [SMALL_STATE(211)] = 3569,
  [SMALL_STATE(212)] = 3576,
  [SMALL_STATE(213)] = 3583,
  [SMALL_STATE(214)] = 3590,
  [SMALL_STATE(215)] = 3597,
  [SMALL_STATE(216)] = 3604,
  [SMALL_STATE(217)] = 3611,
  [SMALL_STATE(218)] = 3618,
  [SMALL_STATE(219)] = 3625,
  [SMALL_STATE(220)] = 3632,
  [SMALL_STATE(221)] = 3639,
  [SMALL_STATE(222)] = 3646,
  [SMALL_STATE(223)] = 3653,
  [SMALL_STATE(224)] = 3660,
  [SMALL_STATE(225)] = 3667,
  [SMALL_STATE(226)] = 3674,
  [SMALL_STATE(227)] = 3681,
  [SMALL_STATE(228)] = 3688,
  [SMALL_STATE(229)] = 3695,
  [SMALL_STATE(230)] = 3702,
  [SMALL_STATE(231)] = 3709,
  [SMALL_STATE(232)] = 3716,
  [SMALL_STATE(233)] = 3723,
  [SMALL_STATE(234)] = 3730,
  [SMALL_STATE(235)] = 3737,
  [SMALL_STATE(236)] = 3744,
  [SMALL_STATE(237)] = 3751,
  [SMALL_STATE(238)] = 3758,
  [SMALL_STATE(239)] = 3765,
  [SMALL_STATE(240)] = 3772,
  [SMALL_STATE(241)] = 3779,
  [SMALL_STATE(242)] = 3786,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(214),
  [7] = {.count = 1, .reusable = true}, SHIFT(235),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(43),
  [13] = {.count = 1, .reusable = true}, SHIFT(44),
  [15] = {.count = 1, .reusable = true}, SHIFT(45),
  [17] = {.count = 1, .reusable = true}, SHIFT(46),
  [19] = {.count = 1, .reusable = true}, SHIFT(47),
  [21] = {.count = 1, .reusable = true}, SHIFT(49),
  [23] = {.count = 1, .reusable = true}, SHIFT(40),
  [25] = {.count = 1, .reusable = true}, SHIFT(58),
  [27] = {.count = 1, .reusable = true}, SHIFT(57),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 1, .reusable = true}, SHIFT(59),
  [36] = {.count = 1, .reusable = true}, SHIFT(4),
  [38] = {.count = 1, .reusable = true}, SHIFT(69),
  [40] = {.count = 1, .reusable = true}, SHIFT(2),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [44] = {.count = 1, .reusable = true}, SHIFT(208),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [48] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(43),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(44),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(45),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(46),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(47),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(49),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(40),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(58),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(57),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [82] = {.count = 1, .reusable = true}, SHIFT(107),
  [84] = {.count = 1, .reusable = true}, SHIFT(38),
  [86] = {.count = 1, .reusable = false}, SHIFT(35),
  [88] = {.count = 1, .reusable = true}, SHIFT(34),
  [90] = {.count = 1, .reusable = true}, SHIFT(33),
  [92] = {.count = 1, .reusable = true}, SHIFT(31),
  [94] = {.count = 1, .reusable = true}, SHIFT(32),
  [96] = {.count = 1, .reusable = true}, SHIFT(30),
  [98] = {.count = 1, .reusable = true}, SHIFT(37),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(38),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(34),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(33),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(31),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(32),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(30),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(37),
  [126] = {.count = 1, .reusable = true}, SHIFT(91),
  [128] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(22),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(77),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(79),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(80),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(76),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(81),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(82),
  [151] = {.count = 1, .reusable = true}, SHIFT(125),
  [153] = {.count = 1, .reusable = true}, SHIFT(89),
  [155] = {.count = 1, .reusable = true}, SHIFT(26),
  [157] = {.count = 1, .reusable = true}, SHIFT(27),
  [159] = {.count = 1, .reusable = true}, SHIFT(88),
  [161] = {.count = 1, .reusable = true}, SHIFT(87),
  [163] = {.count = 1, .reusable = true}, SHIFT(75),
  [165] = {.count = 1, .reusable = true}, SHIFT(86),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(85),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(84),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(83),
  [190] = {.count = 1, .reusable = true}, SHIFT(126),
  [192] = {.count = 1, .reusable = true}, SHIFT(22),
  [194] = {.count = 1, .reusable = true}, SHIFT(85),
  [196] = {.count = 1, .reusable = true}, SHIFT(84),
  [198] = {.count = 1, .reusable = true}, SHIFT(83),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(89),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(88),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(75),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(86),
  [223] = {.count = 1, .reusable = true}, SHIFT(143),
  [225] = {.count = 1, .reusable = true}, SHIFT(77),
  [227] = {.count = 1, .reusable = true}, SHIFT(79),
  [229] = {.count = 1, .reusable = true}, SHIFT(80),
  [231] = {.count = 1, .reusable = true}, SHIFT(76),
  [233] = {.count = 1, .reusable = true}, SHIFT(81),
  [235] = {.count = 1, .reusable = true}, SHIFT(82),
  [237] = {.count = 1, .reusable = true}, SHIFT(117),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__float_positive, 1, .production_id = 4),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym__float_positive, 1, .production_id = 4),
  [243] = {.count = 1, .reusable = true}, SHIFT(139),
  [245] = {.count = 1, .reusable = true}, SHIFT(118),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 1),
  [251] = {.count = 1, .reusable = true}, SHIFT(223),
  [253] = {.count = 1, .reusable = true}, SHIFT(160),
  [255] = {.count = 1, .reusable = true}, SHIFT(205),
  [257] = {.count = 1, .reusable = true}, SHIFT(242),
  [259] = {.count = 1, .reusable = true}, SHIFT(240),
  [261] = {.count = 1, .reusable = true}, SHIFT(237),
  [263] = {.count = 1, .reusable = true}, SHIFT(236),
  [265] = {.count = 1, .reusable = true}, SHIFT(161),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 5),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(219),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [277] = {.count = 1, .reusable = true}, SHIFT(164),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(205),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(242),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(240),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(237),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(236),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [302] = {.count = 1, .reusable = true}, SHIFT(153),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [308] = {.count = 1, .reusable = true}, SHIFT(226),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [314] = {.count = 1, .reusable = true}, SHIFT(155),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(187),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [326] = {.count = 1, .reusable = true}, SHIFT(152),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [332] = {.count = 1, .reusable = true}, SHIFT(228),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [340] = {.count = 1, .reusable = true}, SHIFT(202),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [346] = {.count = 1, .reusable = true}, SHIFT(201),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(75),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(109),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [367] = {.count = 1, .reusable = true}, SHIFT(169),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [373] = {.count = 1, .reusable = true}, SHIFT(111),
  [375] = {.count = 1, .reusable = true}, SHIFT(109),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [379] = {.count = 1, .reusable = true}, SHIFT(207),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [383] = {.count = 1, .reusable = true}, SHIFT(206),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(216),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [391] = {.count = 1, .reusable = true}, SHIFT(220),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(229),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [403] = {.count = 1, .reusable = true}, SHIFT(232),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [417] = {.count = 1, .reusable = true}, SHIFT(121),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(167),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(168),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [465] = {.count = 1, .reusable = true}, SHIFT(112),
  [467] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [469] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(89),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(26),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(27),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(75),
  [481] = {.count = 1, .reusable = true}, SHIFT(115),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [485] = {.count = 1, .reusable = true}, SHIFT(211),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [489] = {.count = 1, .reusable = true}, SHIFT(222),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [493] = {.count = 1, .reusable = true}, SHIFT(212),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [499] = {.count = 1, .reusable = true}, SHIFT(210),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [503] = {.count = 1, .reusable = true}, SHIFT(209),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [507] = {.count = 1, .reusable = true}, SHIFT(203),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [511] = {.count = 1, .reusable = true}, SHIFT(204),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [515] = {.count = 1, .reusable = true}, SHIFT(150),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [519] = {.count = 1, .reusable = true}, SHIFT(151),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [523] = {.count = 1, .reusable = true}, SHIFT(224),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [527] = {.count = 1, .reusable = true}, SHIFT(165),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [531] = {.count = 1, .reusable = true}, SHIFT(198),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [535] = {.count = 1, .reusable = true}, SHIFT(197),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [539] = {.count = 1, .reusable = true}, SHIFT(192),
  [541] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(5),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(129),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(133),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [558] = {.count = 1, .reusable = true}, SHIFT(191),
  [560] = {.count = 1, .reusable = true}, SHIFT(129),
  [562] = {.count = 1, .reusable = true}, SHIFT(133),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [586] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [590] = {.count = 1, .reusable = true}, SHIFT(178),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [594] = {.count = 1, .reusable = true}, SHIFT(221),
  [596] = {.count = 1, .reusable = true}, SHIFT(188),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 2),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [606] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(214),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(235),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 3),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [640] = {.count = 1, .reusable = true}, SHIFT(148),
  [642] = {.count = 1, .reusable = true}, SHIFT(156),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [646] = {.count = 1, .reusable = true}, SHIFT(181),
  [648] = {.count = 1, .reusable = true}, SHIFT(157),
  [650] = {.count = 1, .reusable = true}, SHIFT(227),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [654] = {.count = 1, .reusable = true}, SHIFT(179),
  [656] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(227),
  [661] = {.count = 1, .reusable = true}, SHIFT(154),
  [663] = {.count = 1, .reusable = true}, SHIFT(149),
  [665] = {.count = 1, .reusable = true}, SHIFT(159),
  [667] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(137),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [678] = {.count = 1, .reusable = true}, SHIFT(48),
  [680] = {.count = 1, .reusable = true}, SHIFT(137),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [686] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 3),
  [688] = {.count = 1, .reusable = true}, SHIFT(141),
  [690] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(194),
  [695] = {.count = 1, .reusable = true}, SHIFT(71),
  [697] = {.count = 1, .reusable = true}, SHIFT(194),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [701] = {.count = 1, .reusable = true}, SHIFT(218),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [705] = {.count = 1, .reusable = true}, SHIFT(177),
  [707] = {.count = 1, .reusable = true}, SHIFT(92),
  [709] = {.count = 1, .reusable = true}, SHIFT(93),
  [711] = {.count = 1, .reusable = true}, SHIFT(52),
  [713] = {.count = 1, .reusable = true}, SHIFT(56),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [717] = {.count = 1, .reusable = true}, SHIFT(180),
  [719] = {.count = 1, .reusable = true}, SHIFT(55),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [723] = {.count = 1, .reusable = true}, SHIFT(217),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [735] = {.count = 1, .reusable = true}, SHIFT(60),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [739] = {.count = 1, .reusable = true}, SHIFT(29),
  [741] = {.count = 1, .reusable = true}, SHIFT(11),
  [743] = {.count = 1, .reusable = true}, SHIFT(53),
  [745] = {.count = 1, .reusable = true}, SHIFT(162),
  [747] = {.count = 1, .reusable = true}, SHIFT(3),
  [749] = {.count = 1, .reusable = true}, SHIFT(68),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [755] = {.count = 1, .reusable = true}, SHIFT(21),
  [757] = {.count = 1, .reusable = true}, SHIFT(19),
  [759] = {.count = 1, .reusable = true}, SHIFT(74),
  [761] = {.count = 1, .reusable = true}, SHIFT(142),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [765] = {.count = 1, .reusable = true}, SHIFT(17),
  [767] = {.count = 1, .reusable = true}, SHIFT(94),
  [769] = {.count = 1, .reusable = true}, SHIFT(18),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [775] = {.count = 1, .reusable = true}, SHIFT(99),
  [777] = {.count = 1, .reusable = false}, SHIFT(99),
  [779] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [781] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [785] = {.count = 1, .reusable = true}, SHIFT(98),
  [787] = {.count = 1, .reusable = true}, SHIFT(97),
  [789] = {.count = 1, .reusable = true}, SHIFT(24),
  [791] = {.count = 1, .reusable = true}, SHIFT(136),
  [793] = {.count = 1, .reusable = true}, SHIFT(50),
  [795] = {.count = 1, .reusable = true}, SHIFT(145),
  [797] = {.count = 1, .reusable = true}, SHIFT(100),
  [799] = {.count = 1, .reusable = true}, SHIFT(95),
  [801] = {.count = 1, .reusable = true}, SHIFT(184),
  [803] = {.count = 1, .reusable = true}, SHIFT(67),
  [805] = {.count = 1, .reusable = true}, SHIFT(63),
  [807] = {.count = 1, .reusable = true}, SHIFT(8),
  [809] = {.count = 1, .reusable = true}, SHIFT(103),
  [811] = {.count = 1, .reusable = true}, SHIFT(193),
  [813] = {.count = 1, .reusable = true}, SHIFT(78),
  [815] = {.count = 1, .reusable = true}, SHIFT(104),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [819] = {.count = 1, .reusable = true}, SHIFT(199),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [823] = {.count = 1, .reusable = true}, SHIFT(65),
  [825] = {.count = 1, .reusable = true}, SHIFT(195),
  [827] = {.count = 1, .reusable = true}, SHIFT(196),
  [829] = {.count = 1, .reusable = true}, SHIFT(36),
  [831] = {.count = 1, .reusable = true}, SHIFT(61),
  [833] = {.count = 1, .reusable = true}, SHIFT(119),
  [835] = {.count = 1, .reusable = true}, SHIFT(131),
  [837] = {.count = 1, .reusable = true}, SHIFT(128),
  [839] = {.count = 1, .reusable = true}, SHIFT(132),
  [841] = {.count = 1, .reusable = true}, SHIFT(41),
  [843] = {.count = 1, .reusable = true}, SHIFT(135),
  [845] = {.count = 1, .reusable = true}, SHIFT(183),
  [847] = {.count = 1, .reusable = true}, SHIFT(51),
  [849] = {.count = 1, .reusable = true}, SHIFT(62),
  [851] = {.count = 1, .reusable = true}, SHIFT(102),
  [853] = {.count = 1, .reusable = true}, SHIFT(116),
  [855] = {.count = 1, .reusable = true}, SHIFT(70),
  [857] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [861] = {.count = 1, .reusable = true}, SHIFT(200),
  [863] = {.count = 1, .reusable = true}, SHIFT(110),
  [865] = {.count = 1, .reusable = true}, SHIFT(176),
  [867] = {.count = 1, .reusable = true}, SHIFT(105),
  [869] = {.count = 1, .reusable = true}, SHIFT(25),
  [871] = {.count = 1, .reusable = true}, SHIFT(172),
  [873] = {.count = 1, .reusable = true}, SHIFT(101),
  [875] = {.count = 1, .reusable = true}, SHIFT(166),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eu4mod(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
