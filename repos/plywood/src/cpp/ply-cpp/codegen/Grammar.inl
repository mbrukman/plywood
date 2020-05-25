PLY_STRUCT_BEGIN(ply::cpp::grammar::Expression::Call)
PLY_STRUCT_MEMBER(openParen)
PLY_STRUCT_MEMBER(closeParen)
PLY_STRUCT_MEMBER(arguments)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::ExpressionWithComma)
PLY_STRUCT_MEMBER(expr)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::NestedNameComponent::Type::IdentifierOrTemplated)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_MEMBER(openAngled)
PLY_STRUCT_MEMBER(closeAngled)
PLY_STRUCT_MEMBER(args)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::NestedNameComponent::Type::DeclType)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(openParen)
PLY_STRUCT_MEMBER(closeParen)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::NestedNameComponent)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(sep)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::Empty)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::Identifier)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::TemplateID)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_MEMBER(openAngled)
PLY_STRUCT_MEMBER(closeAngled)
PLY_STRUCT_MEMBER(args)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::DeclType)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(openParen)
PLY_STRUCT_MEMBER(closeParen)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::Destructor)
PLY_STRUCT_MEMBER(tilde)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::OperatorFunc)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(punc)
PLY_STRUCT_MEMBER(punc2)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::UnqualifiedID::ConversionFunc)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(abstractDcor)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::QualifiedID)
PLY_STRUCT_MEMBER(nestedName)
PLY_STRUCT_MEMBER(unqual)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::TemplateArgumentWithComma::Type::Unknown)
PLY_STRUCT_MEMBER(startToken)
PLY_STRUCT_MEMBER(endToken)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::TemplateArgumentWithComma::Type::TypeID)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(abstractDcor)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::TemplateArgumentWithComma)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::BaseSpecifierWithComma)
PLY_STRUCT_MEMBER(accessSpec)
PLY_STRUCT_MEMBER(baseQid)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::Keyword)
PLY_STRUCT_MEMBER(token)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::LangLinkage)
PLY_STRUCT_MEMBER(extern_)
PLY_STRUCT_MEMBER(literal)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::Record)
PLY_STRUCT_MEMBER(classKey)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(colon)
PLY_STRUCT_MEMBER(baseSpecifierList)
PLY_STRUCT_MEMBER(openCurly)
PLY_STRUCT_MEMBER(closeCurly)
PLY_STRUCT_MEMBER(visor_decls)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::Enum_)
PLY_STRUCT_MEMBER(enumKey)
PLY_STRUCT_MEMBER(classKey)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(basePunc)
PLY_STRUCT_MEMBER(base)
PLY_STRUCT_MEMBER(openCurly)
PLY_STRUCT_MEMBER(closeCurly)
PLY_STRUCT_MEMBER(enumerators)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::TypeID)
PLY_STRUCT_MEMBER(typename_)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(wasAssumed)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::TypeParam)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(ellipsis)
PLY_STRUCT_MEMBER(identifier)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclSpecifier::Ellipsis)
PLY_STRUCT_MEMBER(ellipsisToken)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::ParamDeclarationList)
PLY_STRUCT_MEMBER(openPunc)
PLY_STRUCT_MEMBER(closePunc)
PLY_STRUCT_MEMBER(params)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::FunctionQualifierSeq)
PLY_STRUCT_MEMBER(tokens)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type::Parenthesized)
PLY_STRUCT_MEMBER(openParen)
PLY_STRUCT_MEMBER(closeParen)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type::PointerTo)
PLY_STRUCT_MEMBER(nestedName)
PLY_STRUCT_MEMBER(punc)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type::ArrayOf)
PLY_STRUCT_MEMBER(openSquare)
PLY_STRUCT_MEMBER(closeSquare)
PLY_STRUCT_MEMBER(size)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type::Function)
PLY_STRUCT_MEMBER(params)
PLY_STRUCT_MEMBER(qualifiers)
PLY_STRUCT_MEMBER(arrow)
PLY_STRUCT_MEMBER(trailingRetType)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type::Qualifier)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::DeclaratorProduction)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(target)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declarator)
PLY_STRUCT_MEMBER(prod)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::MemberInitializerWithComma)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(openPunc)
PLY_STRUCT_MEMBER(closePunc)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::AssignmentType::Expression)
PLY_STRUCT_MEMBER(start)
PLY_STRUCT_MEMBER(end)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::AssignmentType::TypeID)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(abstractDcor)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Initializer::None)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Initializer::Assignment)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(equalSign)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Initializer::FunctionBody)
PLY_STRUCT_MEMBER(colon)
PLY_STRUCT_MEMBER(memberInits)
PLY_STRUCT_MEMBER(openCurly)
PLY_STRUCT_MEMBER(closeCurly)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Initializer::BitField)
PLY_STRUCT_MEMBER(colon)
PLY_STRUCT_MEMBER(expressionStart)
PLY_STRUCT_MEMBER(expressionEnd)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::InitDeclaratorWithComma)
PLY_STRUCT_MEMBER(dcor)
PLY_STRUCT_MEMBER(init)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::InitEnumeratorWithComma)
PLY_STRUCT_MEMBER(identifier)
PLY_STRUCT_MEMBER(init)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::ParamDeclarationWithComma)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(dcor)
PLY_STRUCT_MEMBER(init)
PLY_STRUCT_MEMBER(comma)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Namespace_)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(openCurly)
PLY_STRUCT_MEMBER(closeCurly)
PLY_STRUCT_MEMBER(visor_decls)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Template_)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(params)
PLY_STRUCT_MEMBER(visor_decl)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Simple)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(initDeclarators)
PLY_STRUCT_MEMBER(semicolon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::AccessSpecifier)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(colon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::StaticAssert)
PLY_STRUCT_MEMBER(keyword)
PLY_STRUCT_MEMBER(argList)
PLY_STRUCT_MEMBER(semicolon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::UsingDirective)
PLY_STRUCT_MEMBER(using_)
PLY_STRUCT_MEMBER(namespace_)
PLY_STRUCT_MEMBER(qid)
PLY_STRUCT_MEMBER(semicolon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Alias)
PLY_STRUCT_MEMBER(using_)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_MEMBER(equals)
PLY_STRUCT_MEMBER(declSpecifierSeq)
PLY_STRUCT_MEMBER(dcor)
PLY_STRUCT_MEMBER(semicolon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Linkage)
PLY_STRUCT_MEMBER(extern_)
PLY_STRUCT_MEMBER(literal)
PLY_STRUCT_MEMBER(openCurly)
PLY_STRUCT_MEMBER(closeCurly)
PLY_STRUCT_MEMBER(visor_decls)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::Declaration::Empty)
PLY_STRUCT_MEMBER(semicolon)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::grammar::TranslationUnit)
PLY_STRUCT_MEMBER(visor_decls)
PLY_STRUCT_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::Expression)
SWITCH_TABLE_STATE(ply::cpp::grammar::Expression, Call)
SWITCH_TABLE_END(ply::cpp::grammar::Expression)

PLY_SWITCH_BEGIN(ply::cpp::grammar::Expression)
PLY_SWITCH_MEMBER(Call)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::NestedNameComponent::Type)
SWITCH_TABLE_STATE(ply::cpp::grammar::NestedNameComponent::Type, IdentifierOrTemplated)
SWITCH_TABLE_STATE(ply::cpp::grammar::NestedNameComponent::Type, DeclType)
SWITCH_TABLE_END(ply::cpp::grammar::NestedNameComponent::Type)

PLY_SWITCH_BEGIN(ply::cpp::grammar::NestedNameComponent::Type)
PLY_SWITCH_MEMBER(IdentifierOrTemplated)
PLY_SWITCH_MEMBER(DeclType)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::UnqualifiedID)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, Empty)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, Identifier)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, TemplateID)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, DeclType)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, Destructor)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, OperatorFunc)
SWITCH_TABLE_STATE(ply::cpp::grammar::UnqualifiedID, ConversionFunc)
SWITCH_TABLE_END(ply::cpp::grammar::UnqualifiedID)

PLY_SWITCH_BEGIN(ply::cpp::grammar::UnqualifiedID)
PLY_SWITCH_MEMBER(Empty)
PLY_SWITCH_MEMBER(Identifier)
PLY_SWITCH_MEMBER(TemplateID)
PLY_SWITCH_MEMBER(DeclType)
PLY_SWITCH_MEMBER(Destructor)
PLY_SWITCH_MEMBER(OperatorFunc)
PLY_SWITCH_MEMBER(ConversionFunc)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::TemplateArgumentWithComma::Type)
SWITCH_TABLE_STATE(ply::cpp::grammar::TemplateArgumentWithComma::Type, Unknown)
SWITCH_TABLE_STATE(ply::cpp::grammar::TemplateArgumentWithComma::Type, TypeID)
SWITCH_TABLE_END(ply::cpp::grammar::TemplateArgumentWithComma::Type)

PLY_SWITCH_BEGIN(ply::cpp::grammar::TemplateArgumentWithComma::Type)
PLY_SWITCH_MEMBER(Unknown)
PLY_SWITCH_MEMBER(TypeID)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::DeclSpecifier)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, Keyword)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, LangLinkage)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, Record)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, Enum_)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, TypeID)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, TypeParam)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclSpecifier, Ellipsis)
SWITCH_TABLE_END(ply::cpp::grammar::DeclSpecifier)

PLY_SWITCH_BEGIN(ply::cpp::grammar::DeclSpecifier)
PLY_SWITCH_MEMBER(Keyword)
PLY_SWITCH_MEMBER(LangLinkage)
PLY_SWITCH_MEMBER(Record)
PLY_SWITCH_MEMBER(Enum_)
PLY_SWITCH_MEMBER(TypeID)
PLY_SWITCH_MEMBER(TypeParam)
PLY_SWITCH_MEMBER(Ellipsis)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclaratorProduction::Type, Parenthesized)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclaratorProduction::Type, PointerTo)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclaratorProduction::Type, ArrayOf)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclaratorProduction::Type, Function)
SWITCH_TABLE_STATE(ply::cpp::grammar::DeclaratorProduction::Type, Qualifier)
SWITCH_TABLE_END(ply::cpp::grammar::DeclaratorProduction::Type)

PLY_SWITCH_BEGIN(ply::cpp::grammar::DeclaratorProduction::Type)
PLY_SWITCH_MEMBER(Parenthesized)
PLY_SWITCH_MEMBER(PointerTo)
PLY_SWITCH_MEMBER(ArrayOf)
PLY_SWITCH_MEMBER(Function)
PLY_SWITCH_MEMBER(Qualifier)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::AssignmentType)
SWITCH_TABLE_STATE(ply::cpp::grammar::AssignmentType, Expression)
SWITCH_TABLE_STATE(ply::cpp::grammar::AssignmentType, TypeID)
SWITCH_TABLE_END(ply::cpp::grammar::AssignmentType)

PLY_SWITCH_BEGIN(ply::cpp::grammar::AssignmentType)
PLY_SWITCH_MEMBER(Expression)
PLY_SWITCH_MEMBER(TypeID)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::Initializer)
SWITCH_TABLE_STATE(ply::cpp::grammar::Initializer, None)
SWITCH_TABLE_STATE(ply::cpp::grammar::Initializer, Assignment)
SWITCH_TABLE_STATE(ply::cpp::grammar::Initializer, FunctionBody)
SWITCH_TABLE_STATE(ply::cpp::grammar::Initializer, BitField)
SWITCH_TABLE_END(ply::cpp::grammar::Initializer)

PLY_SWITCH_BEGIN(ply::cpp::grammar::Initializer)
PLY_SWITCH_MEMBER(None)
PLY_SWITCH_MEMBER(Assignment)
PLY_SWITCH_MEMBER(FunctionBody)
PLY_SWITCH_MEMBER(BitField)
PLY_SWITCH_END()

SWITCH_TABLE_BEGIN(ply::cpp::grammar::Declaration)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Namespace_)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Template_)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Simple)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, AccessSpecifier)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, StaticAssert)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, UsingDirective)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Alias)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Linkage)
SWITCH_TABLE_STATE(ply::cpp::grammar::Declaration, Empty)
SWITCH_TABLE_END(ply::cpp::grammar::Declaration)

PLY_SWITCH_BEGIN(ply::cpp::grammar::Declaration)
PLY_SWITCH_MEMBER(Namespace_)
PLY_SWITCH_MEMBER(Template_)
PLY_SWITCH_MEMBER(Simple)
PLY_SWITCH_MEMBER(AccessSpecifier)
PLY_SWITCH_MEMBER(StaticAssert)
PLY_SWITCH_MEMBER(UsingDirective)
PLY_SWITCH_MEMBER(Alias)
PLY_SWITCH_MEMBER(Linkage)
PLY_SWITCH_MEMBER(Empty)
PLY_SWITCH_END()
